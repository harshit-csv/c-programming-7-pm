#include <stdio.h>
void main (){
    int x = 90;
    
    x += 2;    // newX = oldX + 2   // x = x + 2    92

    x -= 4;    // newX = oldX - 4   // x = x - 4    88

    x *= 2;    // newX = oldX * 2   // x = x * 2    176

    x /= 2;    // newX = oldX / 2   // x = x / 2    88

    x %= 2;    // newX = oldX % 2   // x = x % 2    0

    printf("X = %d \n", x);
}

/*

int y = 78;

y = 31;
y = 67;
y = 11;
y =  5;
y =  50;

printf("%d", y);

*/