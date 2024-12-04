#include <stdio.h>
void main (){
    int marks[5] = {45, 23, 12, 67, 73};
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

    printf("\n\nPrinting manually\n");
    printf("%d ",marks[0]);
    printf("%d ",marks[1]);
    printf("%d ",marks[2]);
    printf("%d ",marks[3]);
    printf("%d ",marks[4]);
   
    printf("\n\nPrinting using Loop\n");
    for (int i = 0; i < 5; i++){
        printf("%d ", marks[i]);
    }

    printf("\n\nPrinting using Loop\n");
    for (int i = 0; i < 5; i++){
        printf("%c ", vowels[i]);
    }
}


