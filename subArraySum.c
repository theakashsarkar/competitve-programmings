#include <stdio.h>
int max(int num1, int num2);
// int main () {
//     int array[] = { -2, -3, -4, -1};
//     int n = sizeof(array) / sizeof(array[0]);
//     int best = 0;
//     for (int a = 0; a < n; a++) {
//         for (int b = a; b < n; b++) {
//             int sum = 0;
//             for (int k = a; k <= b; k++) {
//                 sum += array[k];
//             }
//                 printf(" sum =  %d\n", sum);
//             best = max(best, sum);
//         }
//     }
//     printf(" %d \n", best);
// }

int main () {
    int best = 0; 
    int array[] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int n = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < n; i++) {
        int sum = 0; 
        for (int b = i; b < n; b++) {
            sum += array[b];
            best = max(best, sum);
        printf(" %d\n", sum);
        }
    }
    // printf(" %d \n", best);
}

int max(int num1, int num2) {
    return (num1 > num2 ) ? num1 : num2;
}