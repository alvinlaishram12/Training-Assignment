#include <iostream>
using namespace std;
int main() {
    int n, i;
    bool prime = true;
    cout << "Enter a number: ";
    cin >> n;
    if(n < 2) prime = false;
    for(i=2; i*i<=n; i++) {
        if(n % i == 0) {
            prime = false;
            break;
        }
    }
    if(prime) cout << "Prime";
    else cout << "Not Prime";
    return 0;
}
