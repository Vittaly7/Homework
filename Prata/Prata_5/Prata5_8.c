#include <stdio.h>

int main(void)
{
    int divider = 0;
    int divident = 0;
    printf("This programm calculates modulus operations.\n");
    printf("imput the divider: ");
    scanf("%d", &divider);
    printf("imput the divident: ");
    scanf("%d", &divident);
    while(divident > 0)
    {
        printf("%d %% %d = %d\n", divident, divider, divident % divider);
        printf("imput the divident again: ");
        scanf("%d", &divident);
    }
    printf("Well done!\n");
    return 0;
}