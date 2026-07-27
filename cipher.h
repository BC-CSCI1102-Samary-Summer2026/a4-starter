#ifndef CIPHER_H
#define CIPHER_H

#include <string>

using namespace std;

// Abstract superclass representing a generic cipher. Subclasses must
// override both member functions.
class cipher {
public:
    // Purpose: encrypt the given plain text string.
    // Parameters: the plain text string.
    // Return: the encrypted cipher text string.
    virtual string encrypt(string plaintext) = 0;

    // Purpose: decrypt the given cipher text string.
    // Parameters: the cipher text string.
    // Return: the decrypted plain text string.
    virtual string decrypt(string ciphertext) = 0;

    // Virtual destructor - needed since main.cpp deletes cipher objects
    // through a cipher* pointer.
    virtual ~cipher() {}
};

#endif
