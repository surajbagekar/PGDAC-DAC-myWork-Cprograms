
// Title: EvenOdd (With Return With Arguments)#include <iostream>
#include<iostream>
using namespace std;
 int checkEvenOdd(int num) {
    if (num % 2 == 0) {
        cout << num << " is even." << endl;
        return 0;
    } else {
        cout << num << " is odd." << endl;
        return 1;
    }
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    checkEvenOdd(n);
    return 0;
}