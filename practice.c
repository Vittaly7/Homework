#include <stdio.h>

int main ()
{
    /*int q = 6;
    q > 10 ? printf("%d\n", q) : q < 5 ? printf("%d\n", q*q*q) : printf("%d\n", q*q);
    return 0;*/
    int q = 2;
    for(int i = 0; i <= 15; i++){
        for(int w = 1; w <= i; w++){
        q *= w;
        printf("%d\n", q);
        }
        return 0;
    }
}
// вывести все степени 2 с 0 до 15
// определить порядок действий q = q*q;
//        printf("%d\n", q*q);
// все в git