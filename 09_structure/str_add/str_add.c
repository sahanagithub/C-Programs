/*application:str_add
 * title:project engineer
 * author:sahana.s
 * date:03/04/23
 */
#include <stdio.h>

typedef struct {
     double real;
     double imag;
     } complex;

     complex add(complex a, complex b);

// Main Function
int main()
{    

     complex num1, num2, sum;

     printf("For first complex number:\n");
     printf("Enter the real and imaginary part: ");
     scanf("%lf %lf", &num1.real, &num1.imag);

     printf("For second complex number:\n");
     printf("Enter the real and imaginary part: ");
     scanf("%lf %lf", &num2.real, &num2.imag);

     sum = add(num1, num2);

     printf("Sum = %.2lf + %.2lfi\n", sum.real, sum.imag);

     return 0;
     }

     complex add(complex a, complex b) {
     complex result;
     result.real = a.real + b.real;
     result.imag = a.imag + b.imag;
     return result;
     }

