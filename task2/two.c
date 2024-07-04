#include <stdio.h>
#define BUFSIZE 6

void main(){

    int array[BUFSIZE];
    int number = BUFSIZE;
    
    for(int i = 0; i < BUFSIZE; i++){

        array[i] = number;
        number--;
        printf("%d", array[i]);
     }
     printf("\n");   
}
