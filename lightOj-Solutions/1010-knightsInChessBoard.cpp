// #include <cmath>
// #include <iostream>

// using namespace std;

// int main () {
//     int t;
//     cin >> t;
//     for (int i = 1; i <= t; i++) {
//         int row, col;
//         cin >> row >> col;
//         int chessBoard = row * col;
//         if (row == 1 || col == 1) {
//             cout << max(row, col) << endl;
//         }
//         else if (row == 2 || col == 2) {
//             int maxResult = max(row, col);
//             chessBoard = maxResult;
//             if (maxResult % 4 == 1 || maxResult % 4 == 3) chessBoard++;
//             if (maxResult % 2 == 2) chessBoard += 2;
//             cout << chessBoard << endl;
//         }
//         else if (chessBoard % 2 == 1) {
//             cout <<"od" << chessBoard / 2 + 1 << endl;
//         }
//         else {
//             cout << "even" <<chessBoard / 2 << endl;
//         }
//     }
//     return 0;
// }

// #include <cmath>
// #include <iostream>

// using namespace std;

// int main () {
//     int t;
//     cin >> t;
//     for (int i = 1; i <= t; i++) {
//         int row, col;
//         cin >> row >> col;
//         int chessBoard = row * col;
//         if (row == 1 || col == 1) {
//             cout << "Case " << i << ": " << max(row, col) << endl;
//         }
//         else if (row == 2 || col == 2) {
//             cout<<"Case "<<i<<": "<<((row*col)/8)*4 + (((row*col)%8)>=4?4:(row*col)%8 )<< endl;
//         }
//         else if (chessBoard % 2 == 1) {
//             cout <<"Case " << i << ": " << chessBoard / 2 + 1 << endl;
//         }
//         else {
//             cout << "Case " << i << ": " <<chessBoard / 2 << endl;
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ll t;
//     cin >> t;

//     for (ll i = 1; i <= t; i++)
//     {
//         ll m, n, ans;
//         cin >> m >> n;

//         if (m == 1 || n == 1)
//         {
//             ans = max(m, n);
//         }
//         else if (m == 2 || n == 2)
//         {
//             ans = max(m, n);
//             if (ans % 4 == 2)
//                 ans += 2;
//             else if (ans % 4 == 1 || ans % 4 == 3)
//                 ans++;
//         }
//         else if ((m * n) % 2)
//             ans = ((m * n) / 2) + 1;
//         else
//             ans = (m * n) / 2;
//         printf("Case %lld: %lld\n", i, ans);
//     }
// }


#include <cmath>
#include <iostream>
using namespace std;
int main () {
    int inputNumber; 
    cin >> inputNumber;
    for (int i = 1; i <= inputNumber; i++) {
        int row, col;
        cin >> row >> col;
        int ans ;
        if (row == 1 || col == 1) {
            ans = max(row, col);
        }
        else if (row == 2 || col == 2) {
            ans = max(row, col);
            if (ans % 4 == 2) {
                ans += 2;
            }
            else if (ans % 4 == 1 || ans % 4 == 3) {
                ans++;
            }
        }
        
        else if ((row * col) % 2)
            ans = ((row * col) / 2) + 1;
        else
            ans = (row * col) / 2;
      cout << "Case " << i << ": " << ans << endl;

    }
}