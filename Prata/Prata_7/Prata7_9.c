#include <stdio.h>
#include <stdbool.h>
int main(void){
    unsigned long num = 0;
    //unsigned long div;
    printf("Enter a number: ");
    while(scanf("%lu", &num) == 1){
        for(unsigned long i = 2; i < num; ++i){
            int is_prime = true;
            for(unsigned long j  = 2; j < i; ++j){
                if((i % j) == 0){
                    is_prime = false;
                    break;
                }
            }
            if(is_prime)
                printf("%lu is a prime number.\n", i);
        }
        printf("Enter a number: ");
    }
    return 0;
}