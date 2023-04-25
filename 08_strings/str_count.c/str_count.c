/*application:str_count.c
 * title:project engineer
 * author:sahana.s
 * date:03/04/23
 */
#include <stdio.h>


int main()
{
    char str[] = "How are you";
    int vowels = 0, consonants = 0, alphabets = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            alphabets++;
            if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

     printf("The given string is: %s\n",str);
     printf("Number of alphabets in given string: %d\n", alphabets);
     printf("Number of vowels in given string: %d\n", vowels);
     printf("Number of consonants in given string: %d\n", consonants);
    

     return 0;
}

