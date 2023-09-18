//Pyramid ABC
#include <iostream>
using namespace std;
int main() {
    char input, ch = 'A';
    cout << "Enter the character: ";
    cin >> input;
    input = toupper(input);
    for(int i = 1; i <= (input-'A'+1); ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << ch << " ";
        }
        ++ch;
        cout << endl;
    }
    return 0;
}