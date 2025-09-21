#include <iostream>
#include <cmath>
using namespace std;
int main() {
    for(int n=1; n<1000; n++) {
        int temp = n, digits = 0, sum = 0, x = n;
        while(x != 0) { digits++; x /= 10; }
        while(temp != 0) {
            int d = temp % 10;
            sum += pow(d, digits);
            temp /= 10;
        }
        if(sum == n) cout << n << " ";
    }
    return 0;
}
