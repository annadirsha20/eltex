#include <stdio.h>

void Bit(void){

    int number;
    scanf("%d", &number);
    int sum = 0;

    for(int i = 31; i >= 0; i--){
        
        if((number >> i) & 1)
            sum++;  
    }
    printf("%d", sum);
}

void main(){
    Bit();
}
