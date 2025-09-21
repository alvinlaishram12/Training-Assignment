#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int a = 0, b = 1, c;
    bool found = false;
    while(a <= n) {
        if(a == n) { found = true; break; }
        c = a + b;
        a = b;
        b = c;
    }
    if(found) cout << "Yes";
    else cout << "No";
    return 0;
}
