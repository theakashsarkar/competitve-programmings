// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str [] = { "abbba" };
//     int l = 0;
//     int h = strlen(str) - 1;

//     while (h > l) {
//         if (str[l++] != str[h--]) {
//             printf("%s is not a palindrome\n", str);
//             return 0;
//         }
//     }
//     printf("%s is a palindrome\n", str);
//     return 0;
// }

// int main() {
//   int n, reversed = 0, remainder, original;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     original = n;

//     // reversed integer is stored in reversed variable
//     while (n != 0) {
//         remainder = n % 10;
//         printf("%d remainder \n", remainder);
//         reversed = reversed * 10 + remainder;
//         n /= 10;
//     }
//     // palindrome if orignal and reversed are equal
//     if (original == reversed)
//         printf("%d is a palindrome.", original);
//     else
//         printf("%d is not a palindrome.", original);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, a = 1, count;
//     int arr[100];
//     while (a <= 100)
//     {
//         count = 0;
//         i = 2;
//         while (i <= a / 2)
//         {
//             if (a % i == 0)
//             {
//                 count++;
//                 break;
//             }
//             i++;
//         }
//         if (count == 0 && a != 1)
//         {
//             arr[a] = a;
//             printf(" %d \n", a);
//         }
//         a++;
//     }
//     return 0;
// }