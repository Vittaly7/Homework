#include <stdio.h>

int main(void)
{
    int num = 0;
    printf("please enter a number: ");
    scanf("%d", &num);
    int num_limit = num + 10;               //увеличение на 10
    while(num <= num_limit)
    {
        printf("%-5d", num++);
    }
    return 0;
}