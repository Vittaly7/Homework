/*#include <stdio.h>
int main(void){
    printf("Type the 'start', the 'end', and 'the step of the progressiom:\n");
    int start, step, end;
    scanf("%d%d%d", &start, &end, &step);
    int sign = (step > 0) ? +1 : -1;
    int x = start;
    while(sign * x < sign * end){
        printf("%d ", x);
        x += step;
    }
    printf("\n");
    return 0;
}*/
/*#include <stdio.h>
int main(void){
    int x = -12345;
    while(x != 0){
        printf("%d\t%d\n", x / 10, x % 10);
        x /= 10;
    }
    return 0;
}*/
/*#include <stdio.h>
int main(void){
    int x;
    printf("Type a number to find wether it'seven:\n");
    scanf("%d", &x);
    while(x != 0){
        if(x % 2 == 0){
            printf("%d is even\n", x);
        }
        else
            printf("try another number!\n");
        scanf("%d", &x);
    }
    return 0;
}*/
#include <stdio.h>
int main(void){
    int x, y;
    printf("Type 'x' and 'y'\n");
    scanf("%d %d", &x, &y);
    while(x != 0 && y != 0){
        if(x > 0 && y > 0)
            printf("first quarter.\n");
        else if(x < 0 && y > 0)
            printf("second quarter.\n");
        else if(x < 0 && y < 0)
            printf("third quarter.\n");
        else
            printf("fourth quarter.\n");
        scanf("%d %d", &x, &y);
    }
    return 0;
}