
// Title: SI (With Return Without Arguments)
#include <iostream>
using namespace std;
float SimpleInterest() {
    float principal, rate, time, interest;
    cout << "Enter principal amount, rate and time: ";
    cin >> principal>>rate>>time;

    
    interest = (principal * rate * time) / 100.0;
    
    return interest;
}

int main() {
    float result = SimpleInterest();
    cout << "Simple Interest: " << result << endl;
    return 0;
}
