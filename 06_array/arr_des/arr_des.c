/*application:arr_des.c
 * brief:
 * author:sahana.s
 * title:project engineer
 *date:03/04/23
 */

#include <stdio.h>
int main()
{
     int arr[100], n, i, j, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("The sorted array in descending order is:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

     return 0;
}
