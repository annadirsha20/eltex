#include <stdio.h>
#define BUFSIZE 3

void main(){
    int array[BUFSIZE][BUFSIZE];
    
    int number = 1;

    for (int rows = 0; rows < BUFSIZE; rows++){
        
         
        for (int cols = 0 ; cols < BUFSIZE; cols++){
            
            array[rows][cols] = number; 
            number++;

            printf("%d", array[rows][cols]);
            
        }
        printf("\n");
        
    }
   
}
