/*application:logicoperator.c
 * brief:To print value using logical operator
 * title:project engineer
 * author:sahana.s
 * date:24/03/2023
 */
#include <stdio.h>
int main()
{
  int i = 5, j = 5, k = 10;

  printf("i is equal to j or k greater than j is  %d \n", (i == j) && (k > j));

  printf("i is equal to j or k less than j is %d \n", (i == j) || (k < j));

  printf("i not equal to j or k less than j is %d \n", (i != j) || (k < j));

  return 0;
}
