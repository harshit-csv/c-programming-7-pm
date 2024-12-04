#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

void add(int x, int y) {
    printf("Add = %d\n", x + y);
}

void main (){
    add(40,6);
    printf("Returned from sum(): %d",sum(5,6));
}