/*application:str_dis.c
 * title:project engineer
 * author:sahana.s
 * date:03/04/23
 */
#include <stdio.h>

typedef struct {
    int feet;
    float inches;
} distance;

distance addDistances(distance d1, distance d2);

// Main Function
int main()
{
     distance dist1, dist2, sum;

     printf("For the first distance:\n");
     printf("Enter feet: ");
     scanf("%d", &dist1.feet);
     printf("Enter inches: ");
     scanf("%f", &dist1.inches);

     printf("For the second distance:\n");
     printf("Enter feet: ");
     scanf("%d", &dist2.feet);
     printf("Enter inches: ");
     scanf("%f", &dist2.inches);

     sum = addDistances(dist1, dist2);

     printf("Sum of distances = %d feet %f inches\n", sum.feet, sum.inches);

     return 0;
}

distance addDistances(distance d1, distance d2) {
    distance result;

    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;

    if (result.inches >= 12) {
        result.inches -= 12;
        result.feet++;
    }

    return result;
}

