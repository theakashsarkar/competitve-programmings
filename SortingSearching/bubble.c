#include <stdio.h>

int main() {
    int arr[] = {9, 8, 12, 6, 5, 4, 3, 2, 1};
    int i, j, tmp;
    for (i = 1; i <= sizeof(arr) / sizeof(arr[0]) - 1 ; i++) {
        for (j = 0; j < sizeof(arr) / sizeof(arr[0])-1; j++ ) {
            if (arr[j] > arr[j + 1]) {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    for (int k = 0; k < sizeof(arr) / sizeof(arr[0]); k++) {
        printf("%d ", arr[k]);
    }
    
}