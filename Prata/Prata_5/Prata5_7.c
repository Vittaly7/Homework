#include <stdio.h>
void square(double num);

int main(void)
{
    double num = 0.0;
    printf("Enter a number: ");
    scanf("%lf", &num);
    square(num);
    return 0;
}

void square(double num)
{
    double square = num * num * num;
    printf("Square of %.2f is %.2f\n", num, square);
    return;
}