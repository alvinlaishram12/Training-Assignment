#include <iostream>
using namespace std;
int main() {
    double cp_dozen, sp_dozen;
    cout << "Enter cost price and selling price per dozen: ";
    cin >> cp_dozen >> sp_dozen;
    double cp_one = cp_dozen / 12.0;
    double sp_one = sp_dozen / 12.0;
    double profit = (sp_one - cp_one) * 25;
    if (profit > 0) cout << "Profit = " << profit;
    else cout << "Loss = " << -profit;
    return 0;
}
