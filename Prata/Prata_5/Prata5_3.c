#include <stdio.h>
#define WEEK_DAYS 7

int main(void)
{
    int days_number = 0;
    printf("Enter the number of days: ");
    scanf("%d", &days_number);
    int weeks = 0;
    int days = 0;
    while(days_number > 0)
    {
        weeks = days_number / WEEK_DAYS;
        days = days_number % WEEK_DAYS;
        printf("%d days is %d weeks and %d days\n", days_number, weeks, days);
        printf("Enter the number of days: ");
        scanf("%d", &days_number);
    }
    return 0;
    
}