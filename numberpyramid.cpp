#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;   // for example: 5
    for(int i = 1; i <= n; i++) {
        // print leading spaces
        for(int j = 1; j <= n - i; j++) cout << " ";
        // print numbers with spaces
        for(int j = 1; j <= i; j++) cout << j << " ";
        cout << endl;
    }
    return 0;
}
