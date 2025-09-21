#include <iostream>

int main() {
    int rows = 5;

    // Outer loop to iterate through each row
    for (int i = 1; i <= rows; ++i) {
        
        // Inner loop to print the leading spaces
        // For row 1 we need 4 spaces, for row 2 we need 3, and so on.
        for (int j = 1; j <= rows - i; ++j) {
            std::cout << "  "; // Use two spaces for better proportion
        }

        // Inner loop to print the asterisks
        // For row 1 we need 1 star, for row 2 we need 2, and so on.
        for (int k = 1; k <= i; ++k) {
            std::cout << "* ";
        }

        // Move to the next line after the row is complete
        std::cout << std::endl;
    }
    return 0;
}