#include <iostream>
int main() {
    int rows, cols;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= cols; ++j) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}