#include <iostream>
#include <cmath>

int main() {
    // Declare variables
    int firstTerm = 3; // First term of the GP
    int commonRatio = 4; // Common ratio of the GP
    int n; // Number of terms in the GP

    // Prompt the user to enter the number of terms
    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    // Display the GP up to 'n' terms
    std::cout << "Geometric Progression (GP) up to " << n << " terms: ";
    for (int i = 0; i < n; ++i) {
        std::cout << firstTerm * std::pow(commonRatio, i);
        if (i != n - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    return 0;
}
