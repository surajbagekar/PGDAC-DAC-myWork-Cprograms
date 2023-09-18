// Title: EvenOdd (With Return With Arguments)
#include <iostream>
using namespace std;

void isPrime(int num) {
    if (num <= 1) {
        cout << num << " is not prime." << endl;
    } else {
        bool prime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            cout << num << " is prime." << endl;
        } else {
            cout << num << " is not prime." << endl;
        }
    }
}

void printPrimes(int n) {
    cout << "Prime numbers up to " << n << ": ";
    for (int i = 2; i <= n; i++) {
        isPrime(i);
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    printPrimes(num);
    return 0;
}
