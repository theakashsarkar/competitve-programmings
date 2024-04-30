#include <stdio.h>

int main () {
    int numberInput;
    printf("Enter an integer: ");
    scanf("%d", &numberInput);
    for (int i = 1; i < numberInput; i++) {
        for (int j = 1; j < numberInput; j++) {
            printf(" i = %d ,  j = %d \n", i , j);
            // printf("Hello World");
        }
    }
    return 0;
}