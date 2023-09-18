// Title: SI (With Return With Arguments)
#include <iostream>
using namespace std;

float simpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100.0;
}

int main() {
    float p, r, t;
    cout << "Enter principal amount: ";
    cin >> p;
    cout << "Enter rate of interest: ";
    cin >> r;
    cout << "Enter time (in years): ";
    cin >> t;
    
    float result = simpleInterest(p, r, t);
    cout << "Simple Interest: " << result << endl;
    return 0;
}
