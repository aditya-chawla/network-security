# Network-Security

## Ciphers
### 1) Affine Cipher- 
The Affine cipher is a type of monoalphabetic substitution cipher, wherein each letter in an alphabet is mapped to its numeric equivalent, encrypted using a simple mathematical function, and converted back to a letter.
* E ( x ) = ( a x + b ) mod m    (Encryption Phase)

* D ( x ) = a^-1 ( x - b ) mod m (Decryption Phase)

### 2) Caeser Cipher- 
It is a type of substitution cipher in which each letter in the plaintext is replaced by a letter some fixed number of positions down the alphabet.
* E(x)=(x+n)mod\ 26       (Encryption Phase with shift n)

* D(x)=(x-n)mod\ 26       (Decryption Phase with shift n)

### 3) Playfair Cipher-
The best-known multiple-letter encryption cipher is the Playfair, which treats digrams in the plaintext as single units and translates these units into ciphertext digrams. The Playfair algorithm is based on the use of a 5x5 matrix of letters constructed using a keyword. The rules for filling in this 5x5 matrix are: L to R, top to bottom, first with keyword after duplicate letters have been removed, and then with the remain letters, with I/J used as a single letter.

## Cryptography algorithms

### Symmetric
Fiestal Structure- Feistel block cipher is a structure used to derive many symmetric block ciphers. Feistel cipher proposed a structure which implements substitution and permutation alternately to obtain cipher text from the pain text and vice-versa.

### Asymmetric
RSA- RSA algorithm is asymmetric cryptography algorithm. RSA is based on the fact that it is difficult to factorize a large integer. The public key consists of two numbers where one number is multiplication of two large prime numbers. And private key is also derived from the same two prime numbers

## Socket Programming
Socket programming is a way of connecting two nodes on a network to communicate with each other. The server starts up first and waits for a client to connect to it. After a client successfully connects, it requests some information. The server serves this information to the client. The client then disconnects and the server waits for more clients.
* Client side
* Server side
