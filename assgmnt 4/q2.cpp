#include <iostream>

int main() {
    // Loop through numbers from 1 to 100
    for (int i = 1; i <= 100; i++) {
        // Check if the current number is divisible by 3
        if (i % 3 == 0) {
            // If divisible by 3, print the number
            std::cout << i << " ";
        }
    }

    // Add a newline after printing all numbers divisible by 3
    std::cout << std::endl;

    return 0;
}
