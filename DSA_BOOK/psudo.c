#include <stdio.h>

int main()
{
    int data[10] = { 100, 9, 8, 7, 26, 5, 4, 3, 2, 1};
    int k = 0, loc = 0, max = data[0];
    int arrayLength = sizeof(data) / sizeof(data[0]);

    while (1)
    {
        k++;

        if (k > arrayLength) break;

        if (max < data[k]) {
            loc = k;
            max = data[k];
        }
    }
    printf("loc: %d\n", loc);
    printf("max: %d\n", max);
    
}