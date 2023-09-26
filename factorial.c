#include <stdio.h>

int main ()
{
        int i = 1;
        long int result = 1;
    do{
        result = result * i;
        i++;
    }
    while(i <= 17);
    printf("%ld", result);
    return 0;
}