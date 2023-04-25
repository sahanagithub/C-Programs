/*application:str_togg.c
 * title:project engineer
 * author:sahana.s
 * date:03/04/23
 */
#include <stdio.h>
#include <string.h>


int main()
{
     char str[] = "RUggEd bOaRD";
     int i;

     printf("Given string is: %s\n",str);

     for (i = 0; str[i] != '\0'; i++) 
     {
          if (islower(str[i])) 
	  {
               str[i] = toupper(str[i]);
          } 
	  else if (isupper(str[i])) 
	  {
               str[i] = tolower(str[i]);
          }
     }
          
     printf("Toggled string is: %s\n", str);

     return 0;
}


