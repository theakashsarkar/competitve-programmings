#include <iostream>
#include <cstdio>

using namespace std;

int main () {
    int numberOfTestCase;
    cin >> numberOfTestCase;
    cin.ignore(256, '\n');
    while (numberOfTestCase--) {
        string a;
        getline(cin, a);
        int ans = 0;
        int j   = 1;
        for (int i = 0; i < a.length(); i++) {

            if (a[i] == 'O') {
                ans += j;
                j++;
            }

            if (a[i] == 'X') {
                j = 1;
            }
        }
        cout << ans << endl;
    }
}