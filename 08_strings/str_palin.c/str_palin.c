/*application:str_palin.c
 * title:project engineer
 * author:sahana.s
 * date:03/04/23
 */
#include <stdio.h>

// Main Function
int main()
{
    char str[100];
    int i, j;
    int isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

     return 0;
}

