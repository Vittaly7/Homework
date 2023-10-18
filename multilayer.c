#include<stdio.h>

int main()
{
int big = 3888;
    for(int i = 1; i <= big; i++){
        if(big % i == 0)
            i <= 62? printf("{%d} - ", i):printf(" %d", i);
            for(int q = 1; q <= i; q++){
                if(i % q == 0 && q % 2 != 0)
                q % 9 == 0? printf(" [%d]", q):printf(" %d", q);
        }
        printf("\n");
    }
return 0;
}