/*application:fil_cr.c
 * author:sahan.s
 * title:project engineer
 * date:03/04/23
 */
#include <stdio.h>
#include <stdlib.h>

// Main Function
int main()
{
	FILE *fp=NULL;
	char ch;
	fp=fopen("myfile.txt","w+");
	if (fp==NULL)
	{
		printf("cannot open file");
		exit(1);
	}
	fputs("Welcome to Rugged Board\n",fp);
	rewind(fp);
	while(!feof(fp))
	{
		ch=fgetc(fp);
		printf("%c",ch);
	}
	fclose(fp);

     return 0;
}

