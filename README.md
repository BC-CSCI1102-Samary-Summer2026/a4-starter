# Assignment 4 - Inheritance

Starter code for Assignment 4: the Secret Message Machine (`smm`).

## Files

- `cipher.h` - abstract superclass (no .cpp file needed, all functions are pure virtual)
- `caesar.h` / `caesar.cpp` - Caesar cipher, inherits from `cipher`
- `vigenere.h` / `vigenere.cpp` - Vigenere cipher, inherits from `cipher`
- `main.cpp` - driver program (currently wired up for Caesar only - you'll update it once Vigenere is working)

Start with `cipher` and `caesar`. Only move on to `vigenere` once Caesar is fully working, per
the assignment instructions.

Don't change the class names, file names, or the required member function signatures - the
autograder compiles and runs your code using these exact names.

## Compiling

Since this assignment has multiple files, compile them all together:

```
g++ -Wall -o smm *.cpp
```

Your program must compile cleanly with `-Wall` - no errors or warnings.
