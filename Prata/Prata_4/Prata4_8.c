/*#include <stdio.h>
#define GALLON_LITTER 3.78
#define MILE_KILOMETER 1.609

int main(void)
{
    double miles = 0.0;
    double gallons = 0.0;
    printf("Enter the number of miles: ");
    scanf("%lf", &miles);
    printf("Enter the number of gallons: ");
    scanf("%lf", &gallons);
    printf("With %d gallon of fuel you will be able to go for %.1lf miles\n", 1, miles / gallons);
    printf("Liters per 100 kilometers will be: %.1lf\n", (100 * GALLON_LITTER) / ((miles / gallons) * MILE_KILOMETER) );
    return 0;
}*/
#include <stdio.h>

#define GAL_LITR    3.785       /* litres amount in 1 gallon */
#define MIL_KM      1.609       /* kilometres amount in 1 mile */

int main(void)
{
    float mile = 0.0f, gallon = 0.0f;
/*  float km = 0.0f, litr = 0.0f;
*/  float miles_per_1gal = 0.0f;
    float litr_per_100km = 0.0f;


    printf("Please, enter miles amount and gallon amount:\n");
    scanf("%f %f", &mile, &gallon);

    miles_per_1gal = mile / gallon;

    printf("Miles per gallon amount is %.1f\n", miles_per_1gal);

/*  km = MIL_KM * mile;
    litr = GAL_LITR * gallon;

    printf("kilometres equals %.1f, litres equals %.1f\n", km, litr);
*/
    litr_per_100km = 100 * GAL_LITR / (miles_per_1gal * MIL_KM);

    printf("Litres per 100 kilometres is %.1f\n", litr_per_100km);

    return 0;
}
