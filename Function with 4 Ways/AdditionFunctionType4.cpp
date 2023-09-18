// Title: Addition of two numbers (With Return With Arguments)
#include <iostream>
using namespace std;

int add(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int result = add(a, b);
    cout << "Sum: " << result << endl;
    return 0;
}
