#include <iostream>
using namespace std;
int main() {
    int start, end;
    cout << "Enter start and end year: ";
    cin >> start >> end;
    for(int y = start; y <= end; y++) {
        if((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
            cout << y << " ";
    }
    return 0;
}
