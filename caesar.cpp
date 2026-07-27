#include "caesar.h"
#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

caesar::caesar() {
    // TODO: prompt "Enter the shift value: ", read it with getline(), and
    // validate it's an integer between 0 and 25 (inclusive). Throw
    // invalid_argument("Error! shift must be 0-25") if not.
}

string caesar::encrypt(string plaintext) {
    // TODO: shift each letter "down" the alphabet by `shift`, wrapping
    // Z -> A as needed. Convert letters to uppercase; copy any non-letter
    // characters through unchanged.
    return "";
}

string caesar::decrypt(string ciphertext) {
    // TODO: shift each letter "up" the alphabet by `shift`, wrapping
    // A -> Z as needed.
    return "";
}
