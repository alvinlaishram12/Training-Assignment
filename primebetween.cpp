#include <iostream>
using namespace std;
int main() {
    int low, high;
    cout << "Enter two natural numbers (low and high): "; 
    cin >> low >> high;
    for(int n=low; n<=high; n++) {
        bool prime = true;
        if(n < 2) continue;
        for(int i=2; i*i<=n; i++) {
            if(n % i == 0) { prime = false; break; }
        }
        if(prime) cout << n << " ";
    }
    return 0;
}

