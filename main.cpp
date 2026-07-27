#include <iostream>
#include <string>
#include <stdexcept>
#include "cipher.h"
#include "caesar.h"
// TODO: once you've implemented the vigenere class, #include "vigenere.h"
//       here and update this file to prompt the user to choose between
//       the Caesar and Vigenere ciphers (see the assignment instructions).
//       For now, this file only builds and runs a caesar cipher.

using namespace std;

int main() {
    char action;
    cout << "Enter 'e' for encryption or 'd' for decryption: ";
    cin >> action;
    cin.ignore();  // discard the leftover newline before using getline()

    string message;
    cout << "Enter the message: ";
    getline(cin, message);

    try {
        cipher *c = new caesar();

        string result;
        if (action == 'e') {
            result = c->encrypt(message);
        } else {
            result = c->decrypt(message);
        }
        cout << result << endl;

        delete c;
    } catch (invalid_argument &e) {
        cout << e.what() << endl;
    }

    return 0;
}
