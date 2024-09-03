#include <stdio.h>

void insertString(int pos, int len, char string[], char insertString[])
{
    int lenInsertString = 3;
    for (int i = len - 1; i >=  pos; i--) 
    {
        string[i + lenInsertString] = string[i];
    }

    for (int j = pos; j < lenInsertString + pos; j++) 
    {
        string[j] = insertString[j - pos];
    }
}

int main() {
    char string[26] = "ABCDEFG";
    char insertString1[3] = "XYZ";
    int len = 7, pos = 3;
    insertString(pos, len, string, insertString1);
    printf("string: %s\n",string);     
    
    return 0;
}