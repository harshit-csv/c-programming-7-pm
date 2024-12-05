#include <stdio.h>
void main (){
    int x = 2, y = 5;

    x--;    // Post Decrement
    x++;    // Post Increment

    printf("%d \n", x);

    printf("%d ", ++y);
    printf("%d ", --y);

}