 // Title: Square of Number (With Return With Arguments)
#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    
    int temp = a;
    a = b;
    b = temp;
    
    cout << "After swapping: a = " << a << ", b = " << b << endl;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    swap(a, b);
    return 0;
}
