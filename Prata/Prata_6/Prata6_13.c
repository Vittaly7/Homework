#include <stdio.h>
#define SIZE 8

int main(void){
    int num = 1;
    int array[SIZE];
    for(int i = 0; i < SIZE; ++i){
        array[i] = num;
        num *= 2;
    }
    int j;
    do{
        printf("%d ", array[j]);
        j++;
    }
    while(j < SIZE);
    printf("\n");

    return 0;

}