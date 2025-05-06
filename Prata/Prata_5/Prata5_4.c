#include <stdio.h>
const float foot_const = 30.48;
int main(void)
{
    int foot = 0;
    float inch_l = 0.0f;
    float sm = 0.0;
    printf("Enter the hight of sm: ");
    scanf("%f", &sm);
    while(sm > 0)
    {
        foot = (int)sm / foot_const;
        inch_l = ((sm / foot_const) - foot) * 12;
        printf("%.1f cm = %d feet, %.1f inches\n", sm, foot, inch_l);
        printf("Enter the hight of sm: ");
        scanf("%f", &sm);
    }
    printf("Bye!\n");
    return 0;
}