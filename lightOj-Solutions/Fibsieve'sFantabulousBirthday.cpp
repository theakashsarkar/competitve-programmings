#include <cmath>
#include <iostream>
using namespace std;

int main() {
     int t;
    cin >> t;
    for (int i = 0; i <= t; i++) {
         int n, row, col;
        cin >> n;
        int sq = ceil(sqrt(n*1.0));
        int x  = (sq * sq) - n;
        if (x < sq) {
            row = sq;
            col = x + 1;
        }
        else {
            col = sq;
            row = (n) - ((sq-1) * (sq-1));
        }
        if (sq % 2 == 0) {
            swap(col, row);
        }
        cout << "Case " <<  i <<  ":" << " " << col << " " << row << endl;
    }
    return 0;
}