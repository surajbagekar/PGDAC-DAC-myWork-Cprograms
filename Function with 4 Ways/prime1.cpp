// Title: Prime (Without Return Without Arguments)
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
            cout

