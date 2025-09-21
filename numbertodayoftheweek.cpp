#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number (1-7): ";
    cin >> n;
    string days[] = {"Invalid","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    if(n>=1 && n<=7) cout << days[n];
    else cout << "Invalid";
    return 0;
}
