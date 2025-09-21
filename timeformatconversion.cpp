#include <iostream>
using namespace std;
int main() {
    string time;
    cout << "Enter time (HH:MM): ";
    cin >> time; // format HH:MM
    cout << "Hour - " << time.substr(0,2)
         << ", Minute - " << time.substr(3);
    return 0;
}