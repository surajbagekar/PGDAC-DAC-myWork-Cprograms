// Title: Square of Number (Without Return with Arguments)
#include <iostream>
using namespace std;
void square(int n) {
    int square = n * n;
    cout << "Square: " << square << endl;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    square(n);
    return 0;
}
