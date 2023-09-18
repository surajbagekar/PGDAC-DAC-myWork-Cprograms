// Title: Area of Rectangle (Without Return without Arguments)
#include <iostream>
using namespace std;

void area() {
    float l, w, area;
    cout << "Enter length and width of the rectangle: ";
    cin >> l >> w;
    area = l * w;
    cout << "Area of the rectangle: " << area << endl;
}

int main() {
    area();
    return 0;
}
