#include <stdio.h>

// Function to merge two sorted subarrays
// void merge(int arr[], int l, int m, int r) {
//     // Calculate sizes of two subarrays to be merged
//     int n1 = m - l + 1;
//     int n2 = r - m;

//     // Create temporary arrays to hold the subarrays
//     int L[n1], R[n2];

//     // Copy data to temporary arrays
//     for (int i = 0; i < n1; i++)
//         L[i] = arr[l + i];
//     for (int j = 0; j < n2; j++)
//         R[j] = arr[m + 1 + j];

//     // Merge the temporary arrays back into arr[l..r]
//     int i = 0, j = 0, k = l;
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) {
//             arr[k] = L[i];
//             i++;
//         } else {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }

//     // Copy remaining elements of L[], if any
//     while (i < n1) {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }

//     // Copy remaining elements of R[], if any
//     while (j < n2) 
//         arr[k] = R[j];
//         j++;
//         k++;
//     }
// }


void merge(int arr[], int left, int mid, int right) {
    int sizeLeft = mid - left + 1;
    int sizeRight = right - mid;
    int L[sizeLeft], R[sizeRight];
    for (int i = 0; i < sizeLeft; i++) {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < sizeRight; j++) {
        R[j] = arr[mid + 1 + j];
    }
    int i = 0, j = 0, k = left;

    while (i < sizeLeft && j < sizeRight) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < sizeLeft) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < sizeRight) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Recursive function to perform merge sort
void mergeSort(int arr[], int l, int r) {
    // Base case: If there is only one element, do nothing
    if (l < r) {
        // Find the middle point to divide the array into two halves
        int m = l + (r - l) / 2;

        // Recursively sort the left and right halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Merge the sorted halves
        merge(arr, l, m, r);
    }
}

int main() {
    int arr[] = {5, 10, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    mergeSort(arr, 0, n - 1);

    printf("\nSorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}