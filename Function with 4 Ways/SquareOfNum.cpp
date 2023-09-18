// Title: Square of Number (With Return With Arguments)
#include <iostream>
using namespace std;

int square(int n) {
    return n * n;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = square(n);
    cout << "Square: " << result << endl;
    return 0;
}
