
// Title: SI (Without Return with Arguments)
#include <iostream>
using namespace std;
void SimpleInterest(float principal, float rate, float time) {
    float interest = (principal * rate * time) / 100.0;
    cout << "Simple Interest: " << interest << endl;
}

int main() {
    float p, r, t;
    cout << "Enter principal amount,rate and time: ";
    cin >> p>>r>>t;
    
    SimpleInterest(p, r, t);
    return 0;
}
