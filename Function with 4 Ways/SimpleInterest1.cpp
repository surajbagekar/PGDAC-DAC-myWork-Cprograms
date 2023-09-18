// Title: SI (Without Return Without Arguments)
#include <iostream>
using namespace std;

void simpleInterest() {
    float principal, rate, time, interest;
    cout << "Enter principal amount: ";
    cin >> principal>>rate>>time;
    
    interest = (principal * rate * time) / 100;
    
    cout << "Simple Interest: " << interest << endl;
}

int main() {
    simpleInterest();
    return 0;
}
