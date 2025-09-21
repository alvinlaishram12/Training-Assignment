#include <iostream>

int main() {
    // You can change this value to print more or fewer rows
    int rows = 5; 

    // Outer loop to handle the number of rows
    for (int i = 0; i < rows; ++i) {
        // Inner loop to print the characters in each row
        for (int j = 0; j <= i; ++j) {
            // 'A' + j calculates the correct character for the column
            // e.g., for j=0 it's 'A', for j=1 it's 'B', etc.
            std::cout << (char)('A' + j) << " ";
        }
        // Move to the next line after completing a row
        std::cout << std::endl;
    }
    return 0;
}