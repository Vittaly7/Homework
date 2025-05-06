//#include <stdio.h>
//#define limit 10

/*int main(void){
    int arr[limit] = {0};
    int i;
    for(i = 0; i < limit; ++i){
        scanf("%d", &arr[i]);
        if(arr[i] < 0){
            i -= 1;
            continue;
        }
        else 
            printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}*/
/*int main(void){
    int i = 0;
    int arr[limit] = {0};
    while(i < limit){
        int temp;
        scanf("%d", &temp);
        if(temp < 0)
            continue;
        else arr[i] = temp;
        i++;
    }
    for(i = 0; i < limit; ++i){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}*/
/*#include <stdio.h>
int main(void){
    while(1){
        int num;
        scanf("%d", &num);
        if(num == 0)
            break;
        printf("%d in hexadecimal is %X\n", num, num);
    }
    return 0;
}*/
/*#include <stdio.h>
int main(void){
    int num;
    scanf("%d", &num);
    while(num != 0){
        if(num == 0)
            break;
        printf("%d in hexadecimal is %X\n", num, num);
        scanf("%d", &num);
    }
    return 0;
}*/
/*#include <stdio.h>
int main(void){
    for(int i = 0; i < 20; ++i){
        if(i == 13) continue;
        if(i % 3 == 0) continue;
        printf("%d, ", i);
        if(i % 7 == 0)
            printf("it's a multiple of 7!\n");
        else
            printf("It's not a multiple of 7!\n");
    }
    return 0;
}*/
/*#include <stdio.h>
#include <stdbool.h>
bool is_prime_number(int x);
int main(void){
    int num;
    printf("Type a number: ");
    while(scanf("%d", &num) == 1){
        if(is_prime_number(num))
            printf("%d is a prime number.\n", num);
        else 
            printf("%d is not a prime number.\n", num);
        printf("Type a number: ");    
    }
    return 0;
}
bool is_prime_number(int x)
{
    for(int i = 2; i * i <= x; ++i){
        if(x % i == 0)
            return 0;
    }
    return 1;
}*/
/*#include <stdio.h>
void deviders(int num);
int main(void){
    int num = 0;
    printf("Type a number to find it's deviders: ");
    while(scanf("%d", &num) == 1){
        deviders(num);
    }
}
void deviders(int num){
    for(int i = 2; i <= num; ++i){
        if((num % i) == 0){
            printf("%d ", i);
            num /= i;
        }
    }
    printf("\n");
    printf("Type a number to find it's deviders: ");
    return;
}*/
/*#include <stdio.h>
int main(void){
    char ch;
    while((ch = getchar()) != EOF){
        putchar(ch);
    }
return 0;
}*/
// угадывание числа с ошибками
/*#include <stdio.h>
int main (void){
    char responce;
    int guess = 1;
    printf("Choose a number in the interval from 1 to 10. I'll try to guess it.\n");
    printf("Press 'y' if my guess is right, 'n' if it isn't.\n");
    printf("Is your number %d? ", guess);
    while((responce = getchar()) != 'y'){
        if(responce == 'n')
            printf("Ok, this one? %d\n", ++guess);
        else
            printf("Only 'y' and 'no' answers are allowed.\n");
        while(getchar() != '\n')
            continue;
    }
    printf("I've won!\n");
    return 0;
}*/
#include <stdio.h>
int main(void){
    int x = 0;
    scanf("%d", &x);
     int p = 1;
     while(x){
        int digit = x % 10;
        printf("%d ", digit);
        p *= digit;
        x /= 10;
     }
     printf("\n");
     printf("%d\n", p);
     return 0;
}