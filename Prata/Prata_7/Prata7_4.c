#include <stdio.h>
#define full_stop '.'
#define exclamation '!'
int main(void){
    char ch;
    int changes = 0;
    printf("Input characters. Press '#' to quit.\n" );
    while((ch = getchar()) != '#'){
        if(ch == full_stop){
            ch = exclamation;
            changes++;
        }
        else if(ch == exclamation){
            putchar('!');
            changes++;
        }
        putchar(ch);
    }
    printf("\n");
    printf("the number of changes is %d.\n", changes);
    return 0;
}