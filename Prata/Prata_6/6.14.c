#include <stdio.h>

int main(void){
    int t_ct;
    double time, power_of_2;
    int limit;
    printf("input the number of elements: ");
    while(scanf("%d", &limit) != 1){
        printf("input the number of elements: ");
        while(getchar() != '\n');  // Очищаем буфер ввода
    }
    for(time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit; t_ct++, power_of_2 *= 2.0){
        time += 1.0 / power_of_2;
        printf("time = %f, when the number of elements = %d.\n", time, t_ct);
    }
    return 0;
}