#include <stdio.h>

void Bit(void){

    int number;
    scanf("%d", &number);

    for(int i = 31; i >= 0; i--){
        
        if((number >> i) & 1){
            printf("1");
        }
        else{
            printf("0");
        }
    }
}

void main(){
    Bit();
}
