// Title: Factorial (with Return without Arguments)
#include <iostream>
using namespace std;

int fact() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int result = fact();
    cout << "fact: " << result << endl;
    return 0;
}
