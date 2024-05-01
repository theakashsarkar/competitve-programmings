// #include <iostream>
// #include <vector>
// using namespace std;

// int main () {
//     int i, j, imin;
//     int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
//     for (i = 1; i < size(arr) - 1; i++) {
//        imin = i; //get index of minimum data
//       for(j = i+1; j< size(arr); j++)
//          if(arr[j] < arr[imin])
//             imin = j;

//       //placing in correct position
//       swap(arr[i], arr[imin]);
//     }
//     for (auto i : arr) {
//         cout << i << endl;
//     }
// }

#include<iostream>
using namespace std;
void swapping(int &a, int &b) {  //swap the content of a and b
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void selectionSort(int *array, int size){
   int i, j, imin;
   for (i = 1; i < size - 1; i++) {
        imin = i;
        for (j = i + 1; j < size; j++) 
            if (array[j] < array[imin]) 
                imin = j;
        // int tmp = array[i];
        // array[i] = array[imin];
        // array[imin] = tmp;
    swap(array[i], array[imin]);

   }
}
int main(){
   int n;
   n = 9;
  int arr[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
   cout << "Array before Sorting: ";
   for(int i = 0; i<n; i++)
      cout << arr[i] << " ";
   cout << endl;
   selectionSort(arr, n);
   cout << "Array after Sorting: ";
   for(int i = 0; i<n; i++)
      cout << arr[i] << " ";
   cout << endl;
}