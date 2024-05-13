#include <iostream>

int main() {
    // Declare variables
    int firstTerm = 4; // First term of the AP
    int commonDifference = 3; // Common difference of the AP
    int n; // Number of terms in the AP

    // Prompt the user to enter the number of terms
    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    // Display the AP up to 'n' terms
    std::cout << "Arithmetic Progression (AP) up to " << n << " terms: ";
    for (int i = 0; i < n; ++i) {
        std::cout << firstTerm + i * commonDifference;
        if (i != n - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    return 0;
}
