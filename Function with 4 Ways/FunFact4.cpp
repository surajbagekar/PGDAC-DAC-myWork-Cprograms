// Title: Factorial (with Return with Arguments)
#include <iostream>
using namespace std;

int fact(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = fact(n);
    cout << "fact: " << result << endl;
    return 0;
}
