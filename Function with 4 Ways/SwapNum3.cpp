// Title: Square of Number (With Return WithoutArguments)
#include <iostream>
using namespace std;

void swap() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    cout << "Before swapping: num1 = " << a << ", b = " << b << endl;
    
    int temp = a;
    a = b;
    b = temp;
    
    cout << "After swapping: a = " << a << ", b = " << b << endl;
}

int main() {
    swap();
    return 0;
}

