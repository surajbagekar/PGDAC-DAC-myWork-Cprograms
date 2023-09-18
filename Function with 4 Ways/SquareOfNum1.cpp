// Title: Square of Number (Without Return Without Arguments)
#include <iostream>
using namespace std;
void square() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int square = n * n;
    cout << "Square: " << square << endl;
}
int main() {
    square();
    return 0;
}
