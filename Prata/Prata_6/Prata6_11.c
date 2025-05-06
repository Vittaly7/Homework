#include <stdio.h>
#define size 8

int main(void){
    int array[size];
    for(int i = 1; i <= size; ++i){
        array[i] = i;
        printf("%d ", array[i]);
    }
    printf("\n");
    for(int j = size; j > 0; --j){
        printf("%d ", array[j]);
    }
    printf("\n");
    return 0;
}