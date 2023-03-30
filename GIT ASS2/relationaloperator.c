/*application:relationaloperator.c
 * brief:To print values using relational operator
 * author:sahana.s
 * title:project engineer
 * date:24/03/2023
 */
#include <stdio.h>
int main()
{
  int j = 6, t = 4;

  printf("%d == %d is %d \n", j, t, j == t);
  printf("%d > %d is %d \n", j, t, j > t);
  printf("%d < %d is %d \n", j, t, j < t);
  printf("%d != %d is %d \n", j, t, j != t);
  printf("%d >= %d is %d \n", j, t, j >= t);
  printf("%d <= %d is %d \n", j, t, j <= t);

  return 0;
}

