#include<stdio.h>

int main()
{
int big = 3888;
    for(int i = 1; i <= 3888; i++){
        if(big % i == 0)
        for(int q = 1; q <= i; q += 2){
            if(i % q == 0){
                if(i < 62){
                    printf("{%d} - %d", i, q);
                    printf("\n");
                }
                else{
                    printf("%d - %d", i, q);
                    printf("\n");
                }
            }
        }
    }
return 0;
}