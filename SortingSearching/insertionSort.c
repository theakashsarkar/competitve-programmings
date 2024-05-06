#include <stdio.h>

void insertionSort(int Array[], int size) {
    int i, j, num;
    for (i = 0; i < size; i++) {
        num = Array[i];
        j = i - 1;
        while (j >= 0 && Array[j] > num) {
            Array[j + 1] = Array[j];
            Array[j] = num;
            j--;
        }
        Array[j + 1] = num;
    }
}

void printArray(int Arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", Arr[i]);
    }
}

int main () {
     int arr[] = { 3, 8, 5, 4, 1, 9, -2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}