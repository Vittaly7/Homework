#include <stdio.h>
#define tax_rate_1 0.15
#define tax_rate_2 0.28
#define single 17850
#define head 23900
#define married 29750
#define married_apart 14875
double tax_to_pay(int category, long income_per_year);
int main (void){
    long income_per_year = 0;
    int category = 0;
    printf("Type the number to choose the category:\n\
1. Single\n\
2. Head\n\
3. married\n\
4. married_apart\n");
    while(scanf("%d", &category) == 1){
        printf("Type your income per year: ");
        scanf("%ld", &income_per_year);
        printf("Your tax to pay is %.2f$.\n", tax_to_pay(category, income_per_year));
        printf("Type the number to choose the category:\n\
1. Single\n\
2. Head\n\
3. married\n\
4. married_apart\n");
    }
    return 0;
}
double tax_to_pay(int category, long income_per_year){
    double tax = 0.0;
    if(category == 1 && income_per_year <= single){
        tax = income_per_year * tax_rate_1;
    }
    else if(category == 1 && income_per_year > single){
        tax = single * tax_rate_1 + (tax_rate_2 * (income_per_year - single));
    }
    else if(category == 2 && income_per_year <= head){
        tax = income_per_year * tax_rate_1;
    }
    else if(category == 2 && income_per_year > head){
        tax = head * tax_rate_1 + (tax_rate_2 * (income_per_year - head));
    }
    else if(category == 3 && income_per_year <= married){
        tax = income_per_year * tax_rate_1;
    }
    else if(category == 3 && income_per_year > married){
        tax = married * tax_rate_1 + (tax_rate_2 * (income_per_year - married));
    }
    else if(category == 4 && income_per_year <= married_apart){
        tax = income_per_year * tax_rate_1;
    }
    else if(category == 4 && income_per_year > married_apart){
        tax = married_apart * tax_rate_1 + (tax_rate_2 * (income_per_year - married_apart));
    }
    else
        return 0;
return tax;
}