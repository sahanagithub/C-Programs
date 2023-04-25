/*application:str_cmp.c
 * author:sahana.s
 * title:sahana.s
 * date:03/04/23
 */
#include <stdio.h>
#include <string.h>

// Main Function
int main()
{
    char pword[20];
    char Password[] = "danger";

    printf("Enter your password: ");
    scanf("%s", pword);

    if (strcmp(pword, Password) == 0) {
        printf("Entered correct password.\n");
    } else {
        printf("Wrong password.\n");
    }

     return 0;
}
