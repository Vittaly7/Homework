/*#include <stdio.h>
#include <ctype.h>                  // for isspace()
#include <stdbool.h>                // for bool true, false
#define STOP '|'                    // quit the program
int main(void){
    char c;                         //character input
    char prev;                      //previous character
    long n_chars = 0L;              //number of characters
    int n_lines = 0;                //number of lines
    int n_words = 0;                //number of words
    int p_lines = 0;                //number of lines
    bool inward = false;            //== true if we are in a word
    printf("Enter a text for analysis (press | to stop):\n");
    prev = '\n';                    //used to identify fool lines
    while((c = getchar()) != STOP){
        n_chars++;                  //count the characters
        if(c == '\n')
            n_lines++;               //count the lines
        if(!isspace(c) && !inward){
            inward = true;           // the beginning of a word
            n_words++;               //count the words
        }
        if(isspace(c) && inward){
            inward = false;          // the end of a word
        }
        prev = c;                    //save the previous character
    }
    if(prev != '\n')
        p_lines = 1;
    printf("Number of characters: %ld\n", n_chars);
    printf("Number of lines: %d\n", n_lines + p_lines);
    printf("Number of words: %d\n", n_words);
    printf("Number of empty lines: %d\n", n_lines - p_lines);
    return 0;
}*/
#include<stdio.h>
#define hours_per_week 40
#define per_hour 10
#define ratio 1.5
#define first_300 300
#define second_150 150
#define first_second 450
#define tax_rate_first_300 0.15
#define tax_rate_next_150 0.2
#define tax_rate_rest 0.25
int main(void){
    float salary_after_tax = 0.0f;
    float tax = 0.0f;       //keeps the remaining ammount after -300 - 150
    float next_150 = 0.0f;
    float rest = 0.0f;
    int hours = 0;
    int overwork = 0;
    int without_overwork = 0;
    float total_salary = 0.0f;
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