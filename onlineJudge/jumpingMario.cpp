#include<iostream>
using namespace std;
 
int main() {
    int T, N;
 
    cin >> T;
    for (int t = 1; t <= T; t++) {
        cin >> N;
 
        int h = 0, l = 0, prev = 0, cur = 0;
        cin >> prev;
        for (int i = 1; i < N; i++) {
            cin >> cur;
            if(cur > prev) h++;
            if(cur < prev) l++;
            prev = cur;
        }
 
        cout << "Case " << t << ": " << h << " " << l << endl;
    }
}