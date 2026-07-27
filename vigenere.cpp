#include "vigenere.h"
#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

vigenere::vigenere() {
    // TODO: prompt "Enter the key string: ", read it with getline(), and
    // validate it contains only letters. Throw
    // invalid_argument("Error! key string must contain only letters.")
    // if not. Store the key in uppercase.
}

string vigenere::make_full_key(string msg) {
    // TODO: build and return a version of `key` that is repeated/aligned
    // to match msg's length, keeping non-letter positions unaltered (see
    // the assignment's "HELLO WORLD!" / "CAT" example).
    return "";
}

string vigenere::encrypt(string plaintext) {
    // TODO: call make_full_key(plaintext), then shift each letter "down"
    // by the amount given by the corresponding letter in the full key
    // (A=0, B=1, ...), wrapping Z -> A as needed.
    return "";
}

string vigenere::decrypt(string ciphertext) {
    // TODO: same idea as encrypt(), but shift "up" instead, wrapping
    // A -> Z as needed.
    return "";
}
