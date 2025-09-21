#include <iostream>
using namespace std;
int main() {
    int score;
    cout << "Enter the score (0-100): ";
    cin >> score;
    if(score >= 90) cout << "A";
    else if(score >= 75) cout << "B";
    else if(score >= 60) cout << "C";
    else if(score >= 40) cout << "D";
    else cout << "F";
    return 0;
}
