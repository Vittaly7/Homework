#include <stdio.h>

int main ()
{
    int q[10];
    int i = 0;
    while(i = 1 && i <= 10){
        q[i] = 0;
        i++;
        int result = 1;
        int e = 0;
            while(e = 1 && e <= i){
                e++;
                result *= i;
                printf("%d\n", result);
            }
    }
    return 0;
}

/*int main ()
{
    for(int i = 1; i <= 15; i++){
        int q = 1;
        for(int w = 1; w <= i; w++){
        q *= i;
        }
        printf("%d\n", q);
    }
        return 0;
}*/
/* #include <stdio.h>

int main() {
    int i, j, result;
    
    for (i = 1; i <= 10; i++) {
        result = 1;
        for (j = 1; j <= i; j++) {
            result *= i;
        }
        printf("%d\n", result);
    }
    
    return 0;
}*/
//это вариант chat gpt, мне нравится больше//