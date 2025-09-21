#include <iostream>
using namespace std;
int main() {
    double temp;
    char type;
    cout << "Enter temperature followed by its type (C or F): ";
    cin >> temp >> type; // type: C or F
    if(type == 'C') 
        cout << "Fahrenheit = " << (temp * 9/5) + 32;
    else 
        cout << "Celsius = " << (temp - 32) * 5/9;
    return 0;
}