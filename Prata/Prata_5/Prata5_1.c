#include <stdio.h>
const int MIN_REP_HOUR = 60;

int main(void)
{
    int num = 0;
    int hours = 0;                            //hours in minutes
    int minutes = 0;                          //remainder
    printf("Enter the number of minutes. Enter 0 to exit: ");
    scanf("%d", &num);
    while(num > 0)
    {
        hours = num / MIN_REP_HOUR;
        minutes = num % MIN_REP_HOUR;
        printf("In %d minutes there are %d hours and %d minutes\n", num, hours, minutes);
        printf("Enter the number of minutes. Enter 0 to exit: ");
        scanf("%d", &num);
    }
}