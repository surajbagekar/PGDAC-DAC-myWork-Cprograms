// Title: Area of Rectangle (With Return with Arguments)
#include <iostream>
using namespace std;

float AreaOfRectangle(float l, float b) {
    return l * b;
}

int main() {
    float l, b;
    cout << "Enter length and breadth of the rectangle: ";
    cin >> l >> b;
    float res = AreaOfRectangle(l, b);
    cout << "Area of the rectangle: " << res << endl;
    return 0;
}

