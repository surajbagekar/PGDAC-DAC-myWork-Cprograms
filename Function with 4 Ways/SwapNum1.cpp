// Title: Square of Number (Without Return Without Arguments)
#include <iostream>
using namespace std;

void swap() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    
    int temp = a;
    a = b;
    b = temp;
    
    cout << "After swapping: a = " << a << ", b = " << b << endl;
}

int main() {
    swap();
    return 0;
}

