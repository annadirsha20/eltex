#include <stdio.h>

void change_bite(void){
    int number = 0xAABBCCFF;
    int new_bite = 0xEE;
    number = number  & 0xFF00FFFF;
    number = (new_bite << 16) | number;

    printf("%X\n", number);
}


void main(){
    change_bite();
}
