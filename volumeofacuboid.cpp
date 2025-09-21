#include <iostream>
using namespace std;
int main() {
    double length, width, height;
    cout << "Enter length, width and height of the cuboid: ";
    cin >> length >> width >> height;
    double volume = length * width * height;
    cout << "Volume = " << volume;
    return 0;
}