// Title: Area of Rectangle (With Return without Arguments)
#include <iostream>
using namespace std;

float Area() {
    float l, w, area;
    cout << "Enter length and width of the rectangle: ";
    cin >> l >> w;
    area = l * w;
    return area;
}

int main() {
    float result = Area();
    cout << "Area of the rectangle: " << result << endl;
    return 0;
}
