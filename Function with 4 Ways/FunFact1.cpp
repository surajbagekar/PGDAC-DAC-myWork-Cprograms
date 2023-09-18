// Title: Factorial (Without Return Without Arguments)
#include <iostream>
using namespace std;

void fact() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << "fact: " << fact << endl;
}

int main() {
    fact();
    return 0;
}
