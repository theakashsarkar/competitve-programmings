#include<iostream>
using namespace std;

int main() {
    int numberOfTestCase;
    cin >> numberOfTestCase;
    while (numberOfTestCase--)
    {
        int input;
        cin >> input;

        long long int res = abs((((((input * 567 ) / 9 ) + 7492 ) * 235 ) / 47 - 498) / 10);

        cout << res % 10 << endl;

    }
    
}
