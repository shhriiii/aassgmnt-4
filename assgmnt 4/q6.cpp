#include <iostream>

int main() {
    // Start with 'a' whose ASCII value is 97
    char ch = 'a';

    // Print ASCII values and their equivalent characters for the 26 alphabets
    std::cout << "ASCII values and their equivalent characters for the 26 alphabets:" << std::endl;
    while (ch <= 'z') {
        std::cout << "ASCII value of '" << ch << "' = " << int(ch) << std::endl;
        ch++; // Increment to the next character
    }

    return 0;
}
