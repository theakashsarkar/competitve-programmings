#include <stdio.h>

// int main() {
//     int a;
//     while (scanf("%d", &a) != EOF) {
//         if (a == 0) break; 
//         printf("%d\n", a);
//     }

//     while (scanf("%d", &a) != EOF && a)
//     {
//         printf("%d\n", a);
//     }
// }

int main() {
    int sum = 0, i, n, j;
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    n = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < n; i++) {
        for (j = 1; j < i; j++) {
            sum += j;
        }
    }
    printf("%d\n", sum);
}