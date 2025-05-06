#include <stdio.h>

int main(void){
    double a = 0.0;
    double b = 0.0;
    printf("Enter two numbers: ");
    while(scanf("%lf %lf", &a, &b) == 2){
        printf("(%.3lf - %.3lf) / (%.3lf * %.3lf) = %.10lf\n", a, b, a, b, (a - b) / (a * b));
        printf("Enter two numbers: \n");
        printf("Enter 'q' to quit\n");
    }
    printf("You quit the program.\n");
    return 0;
}