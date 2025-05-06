#include <stdio.h>

int main(void){
    double sum_initial = 1000000.0;
    double per_cent = 0.08;
    double sum_left = sum_initial;
    int year = 0;
    while(1){
        sum_left -= 100000;
        sum_left += sum_initial * per_cent;
        year++;
        if(sum_left <= 0){
            printf("It will take %d years to spend all the money.\nAnd it will be %.2lf$ left by this time.\n", year, sum_left);
            break;
        }
    }
    return 0;
}