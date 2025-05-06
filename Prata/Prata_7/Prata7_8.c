/*#include <stdio.h>
#define coverage 350

int main(void){
    int sqr_feet;
    int cans;
    printf("Enter the number of square feet to be painted: ");
    while(scanf("%d", &sqr_feet) == 1){
        cans = sqr_feet / coverage;
        cans += (sqr_feet % coverage == 0) ? 0 : 1;
        printf("Number of cans needed: %d %s.\n", cans, cans == 1 ? "can" : "cans");
        printf("Enter the number of square feet to be painted: ");
    }
    return 0;
}*/
#include<stdio.h>
#define hours_per_week 40
#define ratio 1.5
#define first_300 300
#define second_150 150
#define first_second 450
#define tax_rate_first_300 0.15
#define tax_rate_next_150 0.2
#define tax_rate_rest 0.25
int tax_calculator(float salary_after_tax, float tax, float next_150, float rest, int per_hour, int hours, int overwork, int without_overwork, float total_salary);
int main(void){
    float salary_after_tax = 0.0f;
    float tax = 0.0f;       //keeps the remaining ammount after -300 - 150
    float next_150 = 0.0f;
    float rest = 0.0f;
    float per_hour = 0.0f;  // will change with the chosen rate
    int hours = 0;
    int overwork = 0;
    int without_overwork = 0;
    float total_salary = 0.0f;
    printf("Enter a number which corresponds to a desired rate per hour:\n\
1. $ 8.75 per hour\t\t2. $ 9.33 per hour\n\
3. $ 10.00 per hour\t\t4. $ 11.20 per hour\n\
5. Exit\n");
    int choice = 0;
    while(scanf("%d", &choice) == 1){
        switch(choice){
            case 1: per_hour = 8.75;
                tax_calculator(salary_after_tax, tax, next_150, rest, per_hour, hours, overwork, without_overwork, total_salary);
printf("Enter a number which corresponds to a desired rate per hour:\n\
1. $ 8.75 per hour\t\t2. $ 9.33 per hour\n\
3. $ 10.00 per hour\t\t4. $ 11.20 per hour\n\
5. Exit\n"); break;
            case 2: per_hour = 9.33;
                tax_calculator(salary_after_tax, tax, next_150, rest, per_hour, hours, overwork, without_overwork, total_salary);
printf("Enter a number which corresponds to a desired rate per hour:\n\
1. $ 8.75 per hour\t\t2. $ 9.33 per hour\n\
3. $ 10.00 per hour\t\t4. $ 11.20 per hour\n\
5. Exit\n"); break;
            case 3: per_hour = 10.00;
                tax_calculator(salary_after_tax, tax, next_150, rest, per_hour, hours, overwork, without_overwork, total_salary);
printf("Enter a number which corresponds to a desired rate per hour:\n\
1. $ 8.75 per hour\t\t2. $ 9.33 per hour\n\
3. $ 10.00 per hour\t\t4. $ 11.20 per hour\n\
5. Exit\n"); break;
            case 4: per_hour = 11.20;
                tax_calculator(salary_after_tax, tax, next_150, rest, per_hour, hours, overwork, without_overwork, total_salary);
printf("Enter a number which corresponds to a desired rate per hour:\n\
1. $ 8.75 per hour\t\t2. $ 9.33 per hour\n\
3. $ 10.00 per hour\t\t4. $ 11.20 per hour\n\
5. Exit\n"); break;
            default: 
printf("Enter a number which corresponds to a desired rate per hour:\n\
1. $ 8.75 per hour\t\t2. $ 9.33 per hour\n\
3. $ 10.00 per hour\t\t4. $ 11.20 per hour\n\
5. Exit\n"); break;
        }
    }
    return 0;
}
int tax_calculator(float salary_after_tax, float tax, float next_150, float rest, int per_hour, int hours, int overwork, int without_overwork, float total_salary){
    printf("Enter the number of hours worked:");
    scanf("%d", &hours);
    if(hours > hours_per_week){
        overwork = hours - hours_per_week;          // overtime hours
        without_overwork = hours_per_week;          // normal hours
    }
    else{
        overwork = 0;
        without_overwork = hours;
    }
    total_salary = (without_overwork * per_hour) + (overwork * per_hour * ratio);
    if(total_salary <= first_300){
        tax = total_salary * tax_rate_first_300;
        salary_after_tax = total_salary - tax;
    }
    else if(total_salary > first_300 && total_salary <= first_second){
        next_150 = (total_salary - first_300) * tax_rate_next_150;
        tax = first_300 * tax_rate_first_300 + next_150;
        salary_after_tax = total_salary - tax;
    }
    else{
        rest = (total_salary - first_second) * tax_rate_rest;
        next_150 = second_150 * tax_rate_next_150;
        tax = first_300 * tax_rate_first_300 + next_150 + rest;
        salary_after_tax = total_salary - tax;
    }
    printf("Your salary before tax is: %.2f\n", total_salary);
    printf("Your salary after tax is: %.2f\n", salary_after_tax);
    printf("Your total tax is %.2f\n", tax);
    return 0;
}