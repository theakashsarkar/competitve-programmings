// C implementation of code
#include <stdio.h>
#include <string.h>

// Function to get substr in C
// void getString(int pos, int len, int c, char string[])
// {

// 	char substring[1000];

// 	while (c < len) {
// 		substring = string[pos + c - 1];
// 		c++;
// 	}


// 	substring = '\0';

// 	printf(substring);
// 	printf("\n");
// 	return 0;
// }


void insertString(int pos, int len, char string[], char insertString[])
{
	int insertStringLength = 3;
	// char insertString[3] = "xyz";
	for (int i = pos; i < len; i++ ) {
		string[i + insertStringLength] = string[i];
	}
	
	for (int j = pos; j < insertStringLength + pos; j++) {
		string[j] = insertString[j - pos];
	}
	
}

int main()
{

	int pos, len, c = 0;

	char string[7] = "ABCDEFG";
    char insertString[3] = "xyz";
	pos = 3;
	len = 7;

	insertString(pos, len, string, insertString);
	printf("String: %s ", string);

	
	// insertString(pos, len, string);
	return 0;
}
