/*application:pointer_use.c
 * title:project engineer
 * author:sahana.s
 * date:03/04/23
 */
#include <stdio.h>

int main()
{
     
     int m = 300;
     float fx = 300.600006;
     char cht = 'z';

     int *m1;
     float *fx1;
     char *cht1;

     m1=&m;
     fx1=&fx;
     cht1=&cht;

     printf("Using & operator :\n");
     printf("address of m = %p\n",&m);
     printf("address of fx = %p\n",&fx);
     printf("address of cht = %p\n\n",&cht);

     printf("Using & and * operator :\n");
     printf("value at address of m = %d\n",*m1);
     printf("value at address of fx = %f\n",*fx1);
     printf("value at address of cht = %c\n\n",*cht1);

     printf("Using only pointer variable :\n");
     printf("address of m = %p\n", m1);
     printf("address of fx = %p\n",fx1);
     printf("address of cht = %p\n\n",cht1);

     printf("Using only pointer operator :\n");
     printf("value at address of m = %d\n",*m1);
     printf("value at address of fx = %f\n",*fx1);
     printf("value at address of cht = %c\n\n",*cht1);

     return 0;
}


