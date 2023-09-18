
// Title: EvenOdd (Without Return With Arguments)
#include <iostream>
using namespace std;
void checkEvenOdd(int a) {
    if (a % 2 == 0) {
        cout << a << " is even." << endl;
    } else {
        cout << a << " is odd." << endl;
    }
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    checkEvenOdd(n);
    return 0;
}

