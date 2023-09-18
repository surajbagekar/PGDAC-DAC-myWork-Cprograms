// Title: Addition of two numbers (Without Return Without Arguments)
#include <iostream>
using namespace std;
void add() {
    int n1, n2, sum;
    cout << "Enter two numbers: ";
    cin >> n1 >>n2;
    sum = n1 + n2;
    cout << "Sum: " << sum << endl;
}

int main() {
    add();
    return 0;
}
