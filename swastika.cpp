#include <iostream>

int main() {
    // Size of the pattern. Use an odd number for a clear center (e.g., 9, 11, 13).
    int size = 13;

    // Ensure size is odd for symmetry
    if (size % 2 == 0) {
        size++; 
    }

    int middle = size / 2;

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            // Conditions to print a star '*'
            if (
                // Horizontal middle line
                i == middle || 
                // Vertical middle line
                j == middle ||
                // Top arm
                (i == 0 && j > middle) ||
                // Left arm
                (j == 0 && i < middle) ||
                // Bottom arm
                (i == size - 1 && j < middle) ||
                // Right arm
                (j == size - 1 && i > middle)
            ) {
                std::cout << "* ";
            } else {
                std::cout << "  "; // Two spaces for empty areas
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
