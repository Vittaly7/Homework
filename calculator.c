#include <stdio.h>

int main()
{
    char c;
    double x, y;
    for (;;)
    {
        printf("input 2 numbers and a character: \n");
        scanf("%lf %lf %c", &x, &y, &c);

            if (c == '*')
            {
                double res = x*y;
                printf("result is: %.3lf\n", res);
            }
                else if (y != 0 && c == '/')
                
                    {
                        double res = x/y;
                        printf("division result is: %.3lf\n", res);
                    }
                        else
                        {
                        printf("ERROR!");
                        return 0;
                        }
                
    }
    return 0;
}