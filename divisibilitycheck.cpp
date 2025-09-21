#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    if(b != 0 && a % b == 0) cout << "Divisible";
    else cout << "Not Divisible";
    return 0;
}