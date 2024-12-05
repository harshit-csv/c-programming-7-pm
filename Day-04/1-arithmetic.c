#include <stdio.h>
void main (){
    int x = 100, y = 20;

    int sum         = x + y;
    int difference  = x - y;
    int product     = x * y;
    int quotient    = x / y ;
    int remainder   = x % y;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);
}