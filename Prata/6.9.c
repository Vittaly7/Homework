#include <stdio.h>

int main(void){
    long num;
    long sum = 0L;
    _Bool status;                       //is assigned 0 or 1
    printf("Enter an integer to calculate the sum: ");
    printf("Or q to quit.\n");
    status = scanf("%ld", &num);
    while(status){
        sum = sum + num;
        printf("Enter an integer to calculate the sum: ");
        printf("Or q to quit.\n");
        status = scanf("%ld", &num);
    }
    printf("The sum of the entered numbers is: %ld\n", sum);
    return 0;
}