#include<iostream>
#include <string>
using namespace std;
int main()
{
	string x;
	cout<<"Ceaser Cipher "<<endl;
	cout<<"enter the string"<<endl;
	cin>>x;
	for(int i=0;i<x.length();i++)
	{	
	if((x[i]>87&&x[i]<91)||(x[i]>119&&x[i]<123))
	{
		x[i]+=-23;
	}
	else{
	x[i]+=3;
		}
	}
	cout<<"encripted text"<<endl<<x;
	
	for(int i=0;i<x.length();i++)
	{	
	if((x[i]<68&&x[i]>64)||(x[i]>96&&x[i]<100))
	{
		x[i]+=23;
	}
	else
	x[i]+=-3;
	}
	cout<<endl<<"decripted text"<<endl<<x;
	return 0;
}