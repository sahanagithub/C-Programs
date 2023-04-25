/*application:arr_merge.c
 * title:project engineer
 * author:sahana.s
 * date:03/04/23
 */
#include <stdio.h>


int main()
{
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i, j, k;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    printf("Enter the elements of the first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    printf("Enter the elements of the second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    while(i < n1) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while(j < n2) {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    printf("The merged array is:\n");
    for(i = 0; i < n1+n2; i++) {
        printf("%d ", merged[i]);
    }

     return 0;
}

