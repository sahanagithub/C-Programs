/*application:dowhile.c
 * brief:to print from 10 to 20 using do while loop
 * title:project engineer
 * author:sahana.s
 * date:25/03/2023
 */
#include <stdio.h>

int main ()
{
	
        int a = 10;

        do
        {
                printf("value of a:%d\n", a);
		a++;
        }while( a < 20 );
        return 0;
}
