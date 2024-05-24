#include <iostream>
#include <cmath>
using namespace std;

void crossout(int Arr[], int size, int k) {
        cout << " K: " << k << "value : " << Arr[k] << endl;

    if (Arr[k] == 1) {
        return;
    }

    // for (int l = Arr[k] * 2; l <= size; l += Arr[k]) { 
    //     Arr[l-1] = 1;
    // } 
    
    for (int l = k * k; l <= size; l = l + k) {
        // cout << " l: " << Arr[2] << endl;
         
        Arr[l-1] = 1;
    }
}


int main() {
    int arr[10];
    int size = 10; //sizeof(arr) / sizeof(arr[0]);
    int k = 0;
    while ( k < size) {
        arr[k] = k + 1;
        k++;
    }
    
    k = 0;
    while (k <= sqrt(size)) {
        crossout(arr, size, k);
        k++;
    }

    k = 1;
    while (k < size) {
        if (arr[k] != 1) {
             cout << arr[k] << endl;
        }

        k++;
    }

    return 0;
}