#include <stdio.h>

int main ()
{
    for(int i = 1; i <= 15; i++){
        int q = 1;
        for(int w = 1; w <= i; w++){
        q *= i;
        }
        printf("%d\n", q);
    }
        return 0;
}