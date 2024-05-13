#include <iostream>

int main() {
    // Loop through numbers from 1 to 100
    for (int i = 1; i <= 100; i++) {
        // Check if the current number is odd
        if (i % 2 != 0) {
            // If odd, print the number
            std::cout << i << " ";
        }
    }

    // Add a newline after printing all odd numbers
    std::cout << std::endl;

    return 0;
}
