
#include <stdio.h>
#include <string.h>

char getString(int pos, int len, char string[]) {
    char substring[1000];

    for (int c = 0; c < len; c++) {
        substring[c] = string[pos + c - 1];
    }

    substring[len] = '\0';

     printf("%s\n", substring);
    return substring;
}


int main() {
    char string[] = "123456";
    char string1[] = "123";
    int la = 6;
    int lb = 3;
    for (int i = 0; i <= (la - lb); i++) 
    {
        if (getString(i, lb, string) == string1) {
            printf("string exits");
        } else {
            printf("string not exits");
        }
    }
    
}
