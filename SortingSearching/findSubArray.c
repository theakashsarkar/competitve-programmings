#include <stdio.h>
#include <limits.h>

void findSubArray(int Array[], int n) {
    int leftIndex = -1, rightIndex = -1;
    int max_so_far = INT_MIN, min_so_far = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (max_so_far < Array[i]) {
            max_so_far = Array[i];
        }
        if (Array[i] < max_so_far) {
            rightIndex = i;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        
    }
}

int main () {
    int arr[] = { 3, 8, 5, 4, 1, 9, -2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    findSubArray(arr, n);
    return 0;
}