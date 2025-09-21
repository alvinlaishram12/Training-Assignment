#include <iostream>

int main() {
    int rows, cols;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= cols; ++j) {
            // Print '*' for the first row, last row, first column, or last column
            if (i == 1 || i == rows || j == 1 || j == cols) {
                std::cout << "* ";
            } else {
                std::cout << "  "; // Two spaces for alignment
            }
        }
        std::cout << std::endl;
    }
    return 0;
}