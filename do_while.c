#include <stdio.h>

int main()
{
    int i = 0;
    while(i < 10){
        i++;
        int q = 1;
        do {
            int result = i*q;
            printf("%d*%d = %d\n", i, q, result);
            q++;
            }
                while (q <= 10);
            }
            printf("\n");
        return 0;
}

/*#include <stdio.h>

int main() {
    int i = 1;
    do {
        int q = 1;
        do {
            int result = i * q;
            printf("%d * %d = %d\n", i, q, result);
            q++;
        } while (q <= 10);
        printf("\n");
        i++;
    } while (i <= 10);
    return 0;
}*/
/*for(int i = 1; i <= 10; i++){
        for(int q = 1; q <= 10; q++){
        int result = i*q;
        printf("%d*%d = %d\n", i, q, result);
        }
        printf("\n");
    }
    return 0;
}*/