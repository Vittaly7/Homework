#include <stdio.h>

int main(void)
{
    int count, sum;

    int num = 0;
    printf ("Enter a number: ");
    scanf("%d", &num);
    count = 0;
    sum = 0;
    while(count < num)
    {
        sum = sum + count;
        count++;
    }
    printf("Sum = %d\n", sum);
    return 0;
}