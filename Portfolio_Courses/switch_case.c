/*#include <stdio.h>

int main(void){
    char sign;
    int num_1, num_2;
    printf("Enter the numbers and the sign: ");
    
    while(scanf("%d %c %d", &num_1, &sign, &num_2) == 3){
        switch(sign){
            case '+':
                printf("%d\n", num_1 + num_2); break;
            case '-':
                printf("%d\n", num_1 - num_2); break;
            case '*':
                printf("%d\n", num_1 * num_2); break;
            case '/':
                printf("%d\n", num_1 / num_2); break;
        }
        printf("Enter the numbers and the sign: "); 
    }
    return 0;
}*/
//Checking the number of vowels and cons-s in a string.
#include <stdio.h>
#include <string.h>

int main(void){
    int count = 0;
    char str[200] = {0};
    for(int i = 0; i < 200; ++i){
        scanf("%c", &str[i]);
        if(str[i] == '\n' || str[i] == '\0')
            break;
    }
    for(int j = 0; j < strlen(str); ++j){
        switch (str[j]){
            case 'a': case 'A':
            case 'e': case 'E':
            case 'i': case 'I':
            case 'o': case 'O':
            case 'u': case 'U':
            count ++;
            break;
        }
    }
    printf("The number of vowels is %d\n", count);
    return 0;
}