#include <iostream>

using namespace std;

int main() {
    // Declare variable to store the number 'n'
    int n;

    // Prompt the user to enter the number 'n'
    cout << "Enter the number 'n': ";
    cin >> n;

    // Print the table of 'n' from 1 to 10
    cout << "Table of " << n << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << (n * i) << endl;
    }

    return 0;
}
