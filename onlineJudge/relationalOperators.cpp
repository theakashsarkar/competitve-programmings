#include <iostream>
using namespace std;

int main () {
    int numberOfInput;
    cin >> numberOfInput;
    while (numberOfInput--)
    {
        int input1, input2;
        cin >> input1;
        cin >> input2;
        if (input1 < input2) {
            cout << "<" << "\n";
        }
        if (input1 > input2) {
            cout << ">" << "\n";
        }
        if (input1 == input2) {
            cout << "=" << "\n";
        }
    }
    
}