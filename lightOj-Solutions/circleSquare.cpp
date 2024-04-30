#include <cmath>
#include  <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 2 * acos(0.0); 
    int t;
    cin >> t; 
    for (int i = 1; i <= t; i++) {
        double number;
        cin >> number;
        double result = (4 * number * number) - (pi * number * number);
        cout <<"Case " << i << ": " << fixed << setprecision(2) << result << endl;
    }
    return 0;
}