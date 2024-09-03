#include <stdio.h>
void delete(char string[], int pos, int length) {
    for(int i = pos + length; i < 7; i++) {
        string[pos] = string[i];
        pos++;
    }
    string[pos] = '\0';
    
}

int main () {
    char string[26] = "ABCDEFG";
    int len = 4, pos = 2;
    delete(string, pos, len);
    printf("string: %s\n",string);     
}