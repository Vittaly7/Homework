/*#include <stdio.h>
#include <stdbool.h>

int main(void){
    long unsigned num;          //the verified number
    long unsigned div;          //the potential divisor
    bool isPrime;               //is a flag of a prime number
    printf("Enter a number for analisis:");
    printf("Enter 0 to exit.\n");
    while(scanf("%lu", &num) == 1){
        for(div = 2, isPrime = true; (div * div) <= num; ++div){
            if(num % div == 0){
                if((div * div) != num)
                    printf("%lu is devided by %lu and %lu\n", num, div, num / div);
                else
                    printf("%lu is devided by %lu\n", num, div);
                isPrime = false;
            }
        }
        if(isPrime)
            printf("%lu is a prime number.\n", num);
        printf("Enter the next number for analisis:");
        printf("Enter 0 to exit.\n");
    }
    printf("You quit the program.\n");
    return 0;
}*/
#include <stdio.h>
#define full_stop '.'
#define exclamation '!'

int main(void){
    char ch;
    int changes = 0;
    printf("Input characters. Press '#' to quit.\n" );
    while((ch = getchar()) != '#'){
        switch(ch){
            case full_stop:
                ch = exclamation;
                putchar(ch);
                changes++;
                break;
            case exclamation:
                putchar(exclamation);
                putchar(exclamation);
                changes++;
                break;
            default:
                putchar(ch);
        }
    }
    printf("\n");
    printf("the number of changes is %d.\n", changes);
    return 0;
}