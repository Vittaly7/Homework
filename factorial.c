#include <stdio.h>

/*int main ()
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
}*/

int main() {
    int a = 2;
    int N = 0;
    scanf("%d", &N);
    int array[N][N];
    for(int i = 0; i < N; ++i)
        for(int j = 0; j < N; ++j){
            if(i == j){
                array[i][j] = 1;
            }
            if(j > i){
                array[i][j] = a;
                a++;
                printf("%d ", array[i][j]);
            }
            printf("\n");
        }
  return 0;
}