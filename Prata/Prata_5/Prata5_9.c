#include <stdio.h>

const char F = 'F';
const char C = 'C';
const char K = 'K';

int Temperatures (double num);

int main (void)
{
    double Far = 0.0;
    printf("Imput the temperature in Farenhights: ");
    while(scanf("%lf", &Far) == 1)
    {
        Temperatures(Far);
        printf("Imput the temperature in Farenhights: ");
    }
}

int Temperatures (double num)
{
    double Cel = (num - 32) * 5 / 9;
    double Kel = Cel + 273.15;
    printf("Farenhights: %.2f %c\n", num, F);
    printf("Celsius: %.2f %c\n", Cel, C);
    printf("Kelvin: %.2f %c\n", Kel, K);
    return 0;
}