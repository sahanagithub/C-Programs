/*application:fil_num
 * author:sahana.s
 * title:project engineer
 * date:03/04/23
 */
#include <stdio.h>

// Main Function
int main()
{
     FILE *fp;
     char filename[100];
     char ch;
     int line_count = 0;

     printf("Enter filename: ");
     scanf("%s", filename);

     fp = fopen(filename, "r");

     if (fp == NULL) {
          printf("Error: File could not be opened.");
          return 1;
     }

     while ((ch = fgetc(fp)) != EOF) {
          if (ch == '\n') {
               line_count++;
          }
     }

     line_count=line_count+1;

     printf("Number of lines: %d\n", line_count);

     fclose(fp);
     return 0;
}

