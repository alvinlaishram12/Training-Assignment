#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while(b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main() {
    int x, y;
    cout << "Enter two natural numbers: ";
    cin >> x >> y;
    if(gcd(x, y) == 1) cout << "Co-prime";
    else cout << "Not Co-prime";
    return 0;
}
