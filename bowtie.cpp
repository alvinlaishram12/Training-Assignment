#include <iostream>

int main() {
    // This determines the number of rows in each half (the widest point)
    int size = 5; 

    // --- Print the TOP HALF (including the middle) ---
    for (int i = 1; i <= size; ++i) {
        // 1. Print the left-side stars (increases with i)
        for (int j = 1; j <= i; ++j) {
            std::cout << "* ";
        }

        // 2. Print the middle spaces (decreases as i increases)
        int spaces = 2 * (size - i);
        for (int j = 1; j <= spaces; ++j) {
            std::cout << "  "; // Two spaces to align with "* "
        }

        // 3. Print the right-side stars (increases with i)
        for (int j = 1; j <= i; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    // --- Print the BOTTOM HALF ---
    for (int i = size - 1; i >= 1; --i) {
        // 1. Print the left-side stars (decreases with i)
        for (int j = 1; j <= i; ++j) {
            std::cout << "* ";
        }

        // 2. Print the middle spaces (increases as i decreases)
        int spaces = 2 * (size - i);
        for (int j = 1; j <= spaces; ++j) {
            std::cout << "  ";
        }

        // 3. Print the right-side stars (decreases with i)
        for (int j = 1; j <= i; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}