#include <iostream>
using namespace std;
int main() {
    string date;
    cout << "Enter date (DD/MM/YYYY): ";
    cin >> date; // format DD/MM/YYYY
    cout << "Day - " << date.substr(0,2)
         << ", Month - " << date.substr(3,2)
         << ", Year - " << date.substr(6);
    return 0;
}
