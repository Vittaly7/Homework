#include <stdio.h>
const int SIZE = 26;

int main(void){
    char array [SIZE];
    for(int i = 0; i < SIZE; ++i){
        array[i] = 'a' + i;        
    }
    for(int i = 0; i < SIZE; ++i){
        printf("%c, ", array[i]);
    }
    return 0;
}