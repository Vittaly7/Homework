#include <stdio.h>

int is_prime(int n);

int main(void){
    int num;
    printf("input a number: ");
    while(scanf("%d", &num) != 0){
    if (num == 0 || num == 1)
        printf("%d is not a prime number", num);
    if(is_prime(num) == 1)
        printf("%d, is a prime number\n", num);
    else
        printf("%d, is not a prime number\n", num);
    printf("input a number: ");
    }
    return 0;
}
int is_prime(int n){
    for(int i = 2; i < n; ++i){
        if(n % i == 0)
            return 0;
        }
        return 1;
}