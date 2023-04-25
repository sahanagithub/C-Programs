/*application:pointer_len
 * title:project engineer
 * author:sahana.s
 * date:03/04/23
 */
#include <stdio.h>


int main()
{
    char str[100];
    char *ptr;
    int len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    ptr = str;

    while (*ptr != '\0') {
        len++;
        ptr++;
    }

    printf("Length of the givrn string is: %d\n", len);

     return 0;
}


