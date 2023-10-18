#include <stdio.h>

int main()
{
    char c;
    int x, y;
    for (;;)
    {
        printf("input 2 numbers and a character: \n");
        scanf("%d %d %c", &x, &y, &c);

            if (c == '*')
            {
                int res = x*y;
                printf("result is: %d\n", res);
            }
                else if (y != 0 && c == '/')
                
                    {
                        int res = x/y;
                        printf("division result is: %d\n", res);
                    }
                        else
                        {
                        printf("ERROR!");
                        return 0;
                        }
                
    }
    return 0;
}