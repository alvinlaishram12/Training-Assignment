#include <iostream>

int main() {
    int rows = 5;

    // Outer loop for rows, counting down from 5 to 1
    for (int i = rows; i >= 1; --i) {
        
        // Inner loop to print the leading spaces
        // The number of spaces increases with each row
        for (int j = 1; j <= rows - i; ++j) {
            std::cout << "  "; // Two spaces for alignment
        }

        // Inner loop to print the asterisks
        // The number of asterisks is equal to the current row counter 'i'
        for (int k = 1; k <= i; ++k) {
            std::cout << "* ";
        }

        // Move to the next line
        std::cout << std::endl;
    }
    return 0;
}