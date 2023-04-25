/*application:fil_read
 * title:project engineer
 * author:sahana.s
 * date:03/04/23
 */
#include <stdio.h>
#include <stdlib.h>


int main()
{
     FILE *fp=NULL;
	char str[50];
     char filename[100];

     printf("Enter filename: ");
     scanf("%s", filename);

     fp = fopen(filename, "r");

	if (fp==NULL)
	{
		printf("Error");
		exit(1);
	}

	while(!feof(fp))
	{
        fgets(str,9,fp);
        printf("%s",str);
	}
     printf("\n");

	fclose(fp);
     return 0;
}

