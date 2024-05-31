// #include <iostream>
// #include <limits.h>
// using namespace std;



// int main () {
//     int student[200];
//     int numberOfTestCase;
//     cin >> numberOfTestCase;
//     while (numberOfTestCase--) {
//         int numberOfInput;
//         cin >> numberOfInput;
//         int maxDif = 0;
//         int max = 0;
//         for (int i = 0; i < numberOfInput; i++) {
//             scanf("%d ", &student[i]);
//         }

//         for (int  i = 0; i < numberOfInput - 1 ; i++)
//         {
//          if (student[i] > max  ) {
//             max = student[i];
//          }

//          if (max - student[i + 1] > maxDif) {
//             maxDif = max - student[i + 1];
//          }

//         }
//         cout << maxDif << endl;
        
//     }
//     return 0;
// }

#include<cstdio>
 
using namespace std;
 
int T, n, s[200000];
 
int main() {
    scanf("%d", &T);
    while(T--) {
        scanf("%d", &n);
        int max = -200000; int max_dif = -200000;
        for(int i = 0; i < n; i++)
            scanf("%d", &s[i]);
        for(int i = 0; i < n - 1; i++) {
            if(s[i] > max)
                max = s[i];
            if(max - s[i + 1] > max_dif)
                max_dif = max - s[i + 1];
        } 
        printf("%d\n", max_dif);
    }
}