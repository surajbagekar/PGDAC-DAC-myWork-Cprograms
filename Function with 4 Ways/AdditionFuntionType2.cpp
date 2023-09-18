// Title: Addition of two numbers (Without Return with Arguments)

#include <iostream>
using namespace std;

void add(int a, int b) {
    int sum = a + b;
    cout << "Sum: " << sum << endl;
}

int main() {
    int a, b, sum;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    add(a, b);
    return 0;
}

