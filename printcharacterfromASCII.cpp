#include <iostream>
using namespace std;
int main() {
    int code;
    cout << "Enter an ASCII code (0-127): ";
    cin >> code;
    cout << "Character = " << char(code);
    return 0;
}