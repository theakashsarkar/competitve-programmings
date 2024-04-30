#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int numberInput;
    cin >> numberInput;
    for (int i = 1; i <= numberInput; i++) {
        int sum = 0; 
        int numberOfStudent; 
        cin >> numberOfStudent;
        for (int j = 1; j <= numberOfStudent; j++) {
            int n; 
            cin >> n;
            if (n > 0) {
            sum += n;
            }
        }
        cout <<"Case " << i << ": " << sum << endl;
    }

}