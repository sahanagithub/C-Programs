/*application:contionue.c
 * brief:To print num from 10 to 20 using loop.but it should escape 15 using continue statement.
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
		if( a == 15)
                {
	
                        a = a + 1;
                        continue;
                }
                printf("value of a:%d\n", a);
		a++;
        }
	while( a < 20 );
        return 0;
}
