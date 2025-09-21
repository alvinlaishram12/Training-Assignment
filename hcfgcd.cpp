#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two natural numbers: ";
    cin >> a >> b;
    while(a != b) {
        if(a > b) a -= b;
        else b -= a;
    }
    cout << a;
    return 0;
}
