/*application:chg_cas.c
 * author:sahana.s
 * title:project engineer
 * date:03/04/23
 */
#include <stdio.h>
#include "string.h"

int main()
{      
     char upr[50];
     printf("enter the upper case string");
     gets(upr);
     printf("\n the lowercase string is %s",strlwr(upr));

     return 0;      
     
}
