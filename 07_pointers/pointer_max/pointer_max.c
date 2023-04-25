/*application:pointer_max.c
 * author:sahana.s
 * title:project engineer 
 * date:03/04/23
 */
#include <stdio.h>

int main()
{
    int num1, num2;
    int *ptr1, *ptr2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter Second number: ");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    if (*ptr1 > *ptr2) {
        printf("%d is the maximum number.", *ptr1);
    } else {
        printf("%d is the maximum number.", *ptr2);
    }

     return 0;
}


