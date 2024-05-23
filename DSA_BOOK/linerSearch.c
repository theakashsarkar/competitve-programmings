#include <stdio.h>

int main() {
    int data[10] = { 100, 9, 8, 7, 26, 5, 4, 3, 2, 1};
    int loc, k = 0;
    int item = 100;
    int arraySize = sizeof(data) / sizeof(data[0]);
    while(k <= arraySize) {
        if (item == data[k]) {
            loc = k;
        }
           
        k++;
    }
    if (loc >= 0) {
            printf("item is not in the array data\n");
        } else {
            printf("item is found: %d \n", loc);
        }
    return 0;
}