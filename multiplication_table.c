/*#include <stdio.h>

int main ()
{
    for(int i = 1; i <= 10; i++){
        for(int q = 1; q <= 10; q++){
        int result = i*q;
        printf("%d*%d = %d\n", i, q, result);
        }
        printf("\n");
    }
    return 0;
}*/
#include <stdio.h>

int main ()
{
    int i = 1;
    //int q = 0;
    //int result = 0;
    while(i <= 10){
        //i++;        чат гпт
        int q = 1; // чат гпт
        while(q <= 10){
            //q++;    чат гпт
            int result = i*q;
            printf("%d*%d = %d\n", i, q, result);
            q++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

    /*for(int i = 1; i <= 10; i++){
        for(int q = 1; q <= 10; q++){
        int result = i*q;
        printf("%d*%d = %d\n", i, q, result);
        }
        printf("\n");
    }
    return 0;
}*/