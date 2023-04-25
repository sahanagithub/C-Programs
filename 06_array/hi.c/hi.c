/*application:hi.c
 * title:project engineer
 * author:sahana.s
 * date:03/04/23
 */

#include <stdio.h>
#include <string.h>
int main()
{
    char input[3];
    printf("Enter 'hi': ");
    scanf("%s", input);
    if (strcmp(input, "hi") == 0)
     {
        printf("Hello\n");
     }
     else {
        printf("Did not enter 'hi'\n");
     }
     return 0;
}
