#include <stdio.h>
int main(void)
{
    long int num;
    long int sum = 0L;
    int status;
    printf("Введите целое число для вычисления суммы: ");
    printf("Или q для выхода.\n");
    status = scanf("%ld", &num);
    while (status == 1)
    {
        sum = sum + num;
        printf("Введите целое число для вычисления суммы: ");
        printf("Или q для выхода.\n");
        status = scanf("%ld", &num);
    }
    printf("Сумма введенных чисел равна: %ld\n", sum);
    return 0;
}