/*application:nestedif.c
 * breif:c program to give exact value of a and b using nested if statement
 * title:project engineer
 * author:sahana.s
 * date:25/03/2023
 */
#include <stdio.h> 

int main ()
{
	 
        int a = 100;
        int b = 200;

        
        if( a == 100 )
        { 
        	 
                if( b == 200 ) 
                { 
                	 
                        printf("Value of a is 100 and b is 200\n" );
                } 
        } 
        printf("Exact value of a is : %d\n", a );
        printf("Exact value of b is : %d\n", b ); 
        return 0; 
}
