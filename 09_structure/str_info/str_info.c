/*application:str_info.c
 * title:project engineer
 * author:sahan.s
 * date:03/04/23
 */
#include <stdio.h>

typedef struct {
     int rollNo;
     char name[50];
     float marks;
} student;

// Main Function
int main()
{
     student students[5];

     for (int i = 0; i < 5; i++) {
          printf("Enter details for student %d:\n", i+1);

          printf("Roll number: ");
          scanf("%d", &students[i].rollNo);

          printf("Enter First Name: ");
          scanf("%s", students[i].name);

          printf("Enter Marks: ");
          scanf("%f", &students[i].marks);

          printf("\n");
     }

     printf("Displaying Student information:\n");
     for (int i = 0; i < 5; i++) {
          printf("Student %d:\n", i+1);
          printf("Roll number: %d\n", students[i].rollNo);
          printf("First Name: %s\n", students[i].name);
          printf("Marks: %.2f\n\n", students[i].marks);
     }

          return 0;
}

