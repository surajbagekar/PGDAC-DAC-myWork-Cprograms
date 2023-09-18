// Title: Square of Number (With Return Without Arguments)
#include <iostream>
using namespace std;

int square() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    int square = a * a;
    return square;
}

int main() {
    int result = square();
    cout << "Square: " << result << endl;
    return 0;
}
