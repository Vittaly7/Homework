/*#include <stdio.h>
#define PERIOD '.'

int main(void){
    int ch;
    int count = 0;
    while((ch = getchar()) != PERIOD){
        if(ch != '"' && ch != '\\'){
            count++;
        }
    }
    printf("There are %d characters in the string.\nExcluding the quotes and the period.\n", count);
    return 0;
}*/
#include <stdio.h>
int main(void){
    char previous;
    char ch;
    int count_ei = 0;
    while((ch = getchar()) != '#'){
        putchar(ch);
        if(previous == 'e' && ch == 'i')
            count_ei++;
        previous = ch;
    }
    printf("\n");
    printf("the number of 'ei' outputs is %d\n", count_ei);
    return 0;
}