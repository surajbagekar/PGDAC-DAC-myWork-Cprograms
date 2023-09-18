// Title: Area of Rectangle (Without Return with Arguments)
#include <iostream>
using namespace std;

void area(float l, float w) {
    float area = l * w;
    cout << "Area of the rectangle: " << area << endl;
}

int main() {
    float l, w;
    cout << "Enter length and width of the rectangle: ";
    cin >> l >> w;
    area(l, w);
    return 0;
}
