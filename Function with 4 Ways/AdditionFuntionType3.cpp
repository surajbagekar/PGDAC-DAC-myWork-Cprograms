// Title: Addition of two numbers (with Return Without Arguments)
#include <iostream>
using namespace std;

int add() {
    int a, b, sum;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    sum = a + b;
    return sum;
}

int main() {
    int result = add();
    cout << "Sum: " << result << endl;
    return 0;
}
