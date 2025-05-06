#include <stdio.h>
double math(double a, double b);

int main(void){
    double a = 0.0;
    double b = 0.0;
    //double res;
    printf("Enter two numbers: ");
    while(scanf("%lf %lf", &a, &b) == 2){
        //res = math(a, b);
        printf("(%.3lf - %.3lf) / (%.3lf * %.3lf) = %.10lf\n", a, b, a, b, math(a, b));
        printf("Enter two numbers: \n");
        printf("Enter 'q' to quit\n");
    }
    printf("You quit the program.\n");
    return 0;
}
double math(double a, double b){
    
    return (a - b) / (a * b);
}