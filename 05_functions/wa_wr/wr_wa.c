/*application:wa_wr.c
 * brief:c program to add two numbers using user define function 
 * author:sahana.s
 * date:02/04/23
 *  title:project engineer*/

#include <stdio.h>
#include "add.h"


int main()
{
     int a,b,c;
     printf("enter 2 numbers: ");
     scanf("%d%d", &a,&b);
     c= sum (a,b);
     printf ("sum=%d\n", c);
     return 0;
}
