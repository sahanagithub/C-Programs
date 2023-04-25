/*application:str_stu.c
 * author:sahana.s
 * title:project engineer
 * date:03/04/23
 */
#include <stdio.h>

typedef struct {
    char name[50];
    int rollNo;
    float marks;
} student;

// Main Function
int main()
{
    student s;

    // Read information for student
    printf("Enter student information:\n");

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    // Print information for student
    printf("\nDisplaying student information:\n");
    printf("Name: %s\n", s.name);
    printf("Roll number: %d\n", s.rollNo);
    printf("Marks: %.2f\n", s.marks);

     return 0;
}

