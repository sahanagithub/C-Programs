/*application:break.c
 * breif:To print number from 10 to 20 using loop if number is greater than 15 loop should break
 * title:project engineer
 * author:sahana.s
 * date:25/03/2023
 */
#include <stdio.h>

int main ()
{
	
        int a = 10;

    
        while( a < 20 )
	{
		printf("value of a: %d\n", a);
                a++;

                if( a > 15)
		{
		
                        break;
                }
       }

       return 0;
}
