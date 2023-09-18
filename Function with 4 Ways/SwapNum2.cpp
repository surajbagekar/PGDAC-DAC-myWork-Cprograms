// Title: Square of Number (Without Return With Arguments)
#include <iostream>
using namespace std;

void swap(int &a, int &num2) {
    cout << "Before swapping: num1 = " << a << ", num2 = " << num2 << endl;
    
    int temp = a;
    a = num2;
    num2 = temp;
    
    cout << "After swapping: num1 = " << a << ", num2 = " << num2 << endl;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    swap(a, b);
    return 0;
}

