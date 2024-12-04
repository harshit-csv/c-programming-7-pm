#include <stdio.h>
void main (){
    int x = 90;
    int *y = &x;
    
    printf("Adderss of x: %p \n", y);
    printf("Value of x: %d \n", *y);  
}