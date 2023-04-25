/*application:str_tim.c
 * author:sahana.s
 * title:project engineer
 * date:03/04/23
 */
#include <stdio.h>

typedef struct {
    int hours;
    int minutes;
    int seconds;
} timePeriod;

// Main Function
int main()
{
    timePeriod t1, t2, diff;

    printf("Enter start time:\n");

    printf("Enetr Hours, Minutes and Seconds: ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

    printf("\nEnter stop time:\n");

    printf("Enetr Hours, Minutes and Seconds: ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    // Calculate difference between time periods
    if (t2.seconds > t1.seconds) {
        t1.minutes--;
        t1.seconds += 60;
    }

    diff.seconds = t1.seconds - t2.seconds;

    if (t2.minutes > t1.minutes) {
        t1.hours--;
        t1.minutes += 60;
    }

    diff.minutes = t1.minutes - t2.minutes;
    diff.hours = t1.hours - t2.hours;

    // Print difference between time periods
    printf("\nDifference between time periods: %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);

     return 0;
}


