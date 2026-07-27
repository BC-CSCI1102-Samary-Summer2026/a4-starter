#ifndef CAESAR_H
#define CAESAR_H

#include "cipher.h"
#include <string>
#include <stdexcept>

using namespace std;

// Implements the Caesar cipher: shifts every letter "down" the alphabet
// by the same fixed shift value.
class caesar : public cipher {
public:
    // Purpose: prompt the user for the shift value.
    // Parameters: None
    // Throws: invalid_argument if the shift value isn't an integer 0-25.
    caesar();

    // Note: overrides cipher::encrypt()
    // Purpose: encrypt the given plain text string.
    // Parameters: the plain text string.
    // Return: the encrypted cipher text string.
    string encrypt(string plaintext);

    // Note: overrides cipher::decrypt()
    // Purpose: decrypt the given cipher text string.
    // Parameters: the cipher text string.
    // Return: the decrypted plain text string.
    string decrypt(string ciphertext);

private:
    int shift;  // shift value, 0-25
};

#endif
