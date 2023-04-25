/*application:fil_arr
 * author:sahana.s
 * title:project engineer
 * date:03/04/23
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX_LINES 100


int main()
{

    FILE *fp;
    char lines[MAX_LINES][100];
    int i = 0;

    fp = fopen("myfile.txt", "r");

    if (fp == NULL) {
        printf("Error: File could not be opened.");
        exit(1);
    }

    while (i < MAX_LINES && fgets(lines[i], 100, fp) != NULL) {
        i++;
    }

    printf("The content of the file myfile.txt  are :\n");

    for (int j = 0; j < i; j++) {
        printf("%s", lines[j]);
    }
    printf("\n");

    fclose(fp);
     return 0;
}


