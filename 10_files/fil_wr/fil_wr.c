/*application:file_wr.c
 * title:project engineer
 * author:sahana.s
 * date:03/04/23
 */
#include <stdio.h>

// Main Function
int main()
{
    FILE *fp;
    char text[100];

    fp = fopen("myfile.txt", "w");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter text to write to file (press Enter on an empty line to stop):\n");

    // allow user to input multiple lines of text
    while (fgets(text, sizeof(text), stdin) != NULL) {
        if (text[0] == '\n') {
            break; // stop when user inputs an empty line
        }
        fprintf(fp, "%s", text); // write line to file
    }

    fclose(fp);
    printf("File written successfully.\n");

    return 0;
}

