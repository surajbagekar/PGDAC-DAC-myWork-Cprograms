
// Title: EvenOdd (With Return Without Arguments)
#include <iostream>
using namespace std;

void checkEvenOdd(int n) {
    if (n % 2 == 0) {
        cout << n << " is even." << endl;
    } else {
        cout << n << " is odd." << endl;
    }
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    checkEvenOdd(n);
    return 0;
}

