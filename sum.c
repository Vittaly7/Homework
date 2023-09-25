/*#include <stdio.h>

int main ()
{
    for(int i = 1; i <= 1000; i++){
        int sum  = sum + i;
        printf("%d\n", sum);
    }
    return 0;
}*/
#include <stdio.h>

int main() {
    int sum = 0;
    
    for (int i = 1; i <= 1000; i++) {
        sum += i;
    }
    
    printf("Сумма чисел от 1 до 1000: %d\n", sum);
    
    return 0;
}