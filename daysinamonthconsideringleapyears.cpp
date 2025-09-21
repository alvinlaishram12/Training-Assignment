#include <iostream>
using namespace std;
int main() {
    int m, y;
    cout << "Enter month (1-12) and year: ";
    cin >> m >> y;
    int days;
    if(m == 2) {
        if((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
            days = 29;
        else days = 28;
    }
    else if(m==4 || m==6 || m==9 || m==11) days = 30;
    else days = 31;
    cout << "Days = " << days;
    return 0;
}
