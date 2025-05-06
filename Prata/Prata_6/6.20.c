/*#include <stdio.h>
double pow(double n, int p);
int main(void){
    double x, xpow;
    int exp;
    printf("Enter a number and a positive power: \n");
    printf("To quit the program enter q.\n");
    while(scanf("%lf %d", &x, &exp) == 2){
        xpow = pow(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter a number and a positive power: \n");
    }
    return 0;
}
double pow(double n, int p){
    double pow = 1;
    for(int i = 1; i <= p; ++i)
        pow *= n;
    return pow;
}*/
#include <stdio.h>
double power(double a, int b);

int main(void){
    double num, pow_num;
    int P;
    printf("Type the number and it's power:\n");
    printf("to exit press q\n");
    while(scanf("%lf %d", &num, &P) == 2){
        pow_num = power(num, P);
        printf("%.5lf in power of %d is %.5lf\n", num, P, pow_num);
        printf("Type the number and it's power:\n");
    }
    return 0;
}
double power(double a, int b){
    double result = 1;
    for(int i = 1; i <= b; ++i){
        result *= a; 
    }
    return result;
}