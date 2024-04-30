// // C program for insertion sort
// #include <math.h>
// #include <stdio.h>

// /* Function to sort an array using insertion sort*/
// void insertionSort(int arr[], int n)
// {
//     int i, key, j;  10 20 30 40 50 60 70 80 90 100
//     for (i = 1; i < n; i++) {
//         key = arr[i]; // 30 
//         j = i - 1; 2 - 1 = 1
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key; 20 
//     }
// }

// // A utility function to print an array of size n
// void printArray(int arr[], int n)
// {
//     int i;
//     for (i = 0; i < n; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// /* Driver program to test insertion sort */
// int main()
// {
//     int arr[] = { 12, 11, 13, 5, 6 };
//     int n = sizeof(arr) / sizeof(arr[0]);

//     insertionSort(arr, n);
//     printArray(arr, n);

//     return 0;
// }

//1 3 4 5 10 7
#include <cmath>
#include <iostream>
#include<vector>
using namespace std;

// void insertionSort(arr, size) { 
//     // 9 8
//     int i , num , j; 
//     for (i = 1; i <= size; i++) {
//         num = arr[i]; // 9 
//         j   = i - 1 // 0
//         while (j >= 0 && num[j] > num) {
//             arr[j+1] = arr;
//             j--;
//         }
//         arr[j + 1] = key;
//     };
// };

// int main () {
//     int size = 5;
//     vector<int>v;
//     int inputNumber;
//     for (int i = 0; i < size; i++) {
//         cin >> inputNumber;
//         v.push_back(inputNumber);
//     }
//     insertionSort(v, v.size());
//     for (auto i : v) {
//         cout << i << endl; 
//     };
// }

// #include <bits/stdc++.h>
// using namespace std;


// void insertionSort(int arr[], int size) {
//     int i, num, j;
//     for (i = 1; i <= n; i++) {
//         num = num[i] 
//         j   = j - 1;
//         while (j >= 1 && arr[j] >= num) {
//             arr[ j + 1 ] = arr[j];
//             j--;
//         }
//     }
// }


// int main() {
//     int i, j, num;
//     vector<int>v = {3, 9 , 2 , 13 , 5, 6 , 8 , 1, 4, 7};
//     for (int i = 0; i < v.size(); i++) {
//         int num = v[i]; // 3 9
//         int j   = i - 1; // -1 0 
//         while (j >= 0 && v[j] > num) { 
//             v[j + 1] = v[j]; 
//             v[j] = num;
//             j--;
//         }
//         v[j + 1] = num; // 3
//     }
//     for (auto i: v){
//         cout << i << endl;
//     }
// }

int main() {
    vector<int> arr = { 1, 6, 3, 2, 9, 13, 5};
    for (int i = 1; i < arr.size(); i++) {
        int j   = i - 1; 
        while (j >= 0 && arr[j] > arr[j+ 1]) { 
            swap(arr[j], arr[j+1]);
            j--;
        }
    }
    for (auto i : arr) {
        cout << i << " " << endl;
    }
}
