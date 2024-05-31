#include <iostream>
using namespace std;


int main() {
    int numberOfTestCase;
    cin >> numberOfTestCase;
    while(numberOfTestCase--) {
        int n, m;
        cin >> n >> m;
        cout << (n / 3) * (m / 3) << endl;
    }
}