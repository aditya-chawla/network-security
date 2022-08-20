#include <iostream>
#include <math.h>
   using namespace std;

  // find gcd
  int gcd(int a, int b)
  {
    int t;
    while (1)
    {
        t = a % b;
        if (t == 0)
            return b;
        a = b;
        b = t;
    }
  }

  int main()
  {
    //2 random prime numbers
    double p=13 ;
    double q=11 ;
    double n = p * q; //calculate n
    double track;
    double phi = (p - 1) * (q - 1); //calculate phi
    
    //public key
    //e stands for encrypt
    double e=2 ;

    //for checking that 1 < e < phi(n) and gcd(e, phi(n)) = 1; i.e., e and phi(n) are coprime.
    while (e < phi)
    {
        track = gcd(e, phi);
        if (track == 1)
            break;
        else
            e++;
    }
    
    //private key
    //d stands for decrypt
    //choosing d such that it satisfies d*e = 1 mod phi
    double d1 = 1 / e;
    double d = fmod(d1, phi);
    double message ;
    cout<<"Enter Message : ";
    cin>>message;
    double c = pow(message, e); //encrypt the message
    double m = pow(c, d);
    
    c = fmod(c, n);
    m = fmod(m, n);

    cout << "\n"<< "Encrypted message = " << c;
    cout << "\n"<< "Decrypted message = " << m;
}