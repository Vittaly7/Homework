/*#include <stdio.h>
#define SPACE ' '

int main(void){
    char ch;
    ch = getchar();
    while(ch != '\n'){
        if(ch == ' ')
            putchar(ch);
        else
            (putchar(ch + 1));
        ch = getchar();
    }
    putchar(ch);
    return 0;
}*/
#include <stdio.h>
int main(void){
    char ch;
    int count = 1;
    printf("Input the symbols. Press '#' to quit.\n");
    while((ch = getchar()) != '#'){
        if(ch != '\n')
        printf("%c - %d\t", ch, ch);

        if((count % 8) == 0)
            putchar('\n');
        count++;
    }
    return 0;
}