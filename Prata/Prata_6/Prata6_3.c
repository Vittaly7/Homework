/*#include <stdio.h>

#define LETTER 'F'

int main(void) 
{
    int i, j;

    for (i = LETTER; i >= 'A'; i--)
    {
        for (j = LETTER; j >= i; j--)
            printf("%c", j);
        printf("\n");
    }

    return 0;
}*/
#include <stdio.h>
const int size = 6;

int main(void){
    for(int i = 0; i <= size; ++i){
        for(int j = 0; j < i; ++j){
            printf("%c", 'F' - j);
        }
        printf("\n");
    }
    return 0;
}