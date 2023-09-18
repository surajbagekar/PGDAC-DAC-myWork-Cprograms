// Title: Factorial (Without Return with Arguments)
#include <iostream>
using namespace std;

void fact(int a) {
    int fact = 1;
    for (int i = 1; i <= a; i++) {
        fact = fact * i;
    }
    cout << "fact: " << fact << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    fact(n);
    return 0;
}
