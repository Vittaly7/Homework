/*#include <stdio.h>
#include <ctype.h>
int main(void){
    char ch;
    while((ch = getchar()) != '\n'){
        if(isalpha(ch))
            putchar(ch + 1);
        else
            putchar(ch);
    }
    putchar(ch);
    return 0;
}*/
#include <stdio.h>
int main(void){
    int num = 0;
    int even_count = 0;              //number of even numbers
    int even_sum = 0;                //sum of even_numbers to calculate their avarage even_sum / even_count
    int odd_count = 0;               //number of odd numbers
    int odd_sum = 0;                 //sum of odd_numbers to calculate their avarage odd_sum / odd_count
    scanf("%d", &num);
    while(num != 0){
        if(num % 2 == 0){
            even_sum += num;
            even_count++;
        }
        else{
            odd_sum += num;
            odd_count++;
        }
    scanf("%d", &num);
    }
    printf("The total number of even numbers is %d\n", even_count);
    printf("The avarege number of even numbers is %.2f\n", even_count > 0 ? (float)even_sum / even_count : 0.0);
    printf("The total number of odd numbers is %d\n", odd_count);
    printf("The avarege number of the odd numbers is %.2f\n", odd_count > 0 ? (float)odd_sum / odd_count : 0.0);
    
    return 0;
}