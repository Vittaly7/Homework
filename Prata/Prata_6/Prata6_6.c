#include <stdio.h>

int main(void){
    int min, max;
    printf("Input the minimum number and the maximum number: ");
    while(scanf("%d %d", &min, &max) == 2){
        for(int i = min; i <= max; ++i){
            printf("%5d%8d%9d\n", i, i * i, i * i * i);
        }
        printf("Input the minimum and the maximum number:");
        printf("press 'q' to exit. ");        
    }
    return 0;
}