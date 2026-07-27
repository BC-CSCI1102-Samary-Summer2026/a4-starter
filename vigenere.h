#ifndef VIGENERE_H
#define VIGENERE_H

#include "cipher.h"
#include <string>
#include <stdexcept>

using namespace std;

// Implements the Vigenere cipher: shifts each letter by an amount taken
// from a repeating key string.
class vigenere : public cipher {
public:
    // Purpose: prompt the user for the key string.
    // Parameters: None
    // Throws: invalid_argument if the key string contains anything other
    // than letters.
    vigenere();

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
    // Purpose: build the full key string aligned to the given message,
    // repeating the key string and keeping non-letters unaltered.
    // Parameters: the message string.
    // Return: the full aligned key string.
    string make_full_key(string msg);

    string key;  // key string, letters only, uppercase
};

#endif
