#include <stdio.h>
//#include <ncurses.h>
#define hight 10
#define width 20
int hightX = 5;
int widthY = 5;
int hightX_1 = 5;
int widthY_1 = 15; 
char At = '@';
char At_1 = '&';

void grid();
int movement();
int main(void)
{
    grid();

    return 0;
}
void grid(void)
{
    while(1)
    {
        if(movement() == 1)
            break;
        for(int i = 0; i < hight; ++i)
        {
            for(int j = 0; j < width; ++j)
            {
                if(i == 0 || i == hight - 1 || j == 0 || j == width - 1)
                    printf ("%c", '#');
                else if(i == hightX && j == widthY)
                    printf ("%c", At);
                else if(i == hightX_1 && j == widthY_1)
                    printf ("%c", At_1);
                else
                    printf ("%c", ' ');
            }
        printf("\n");
        }
    movement();
    }
return;
}

int movement(void)
{
    printf("Controlls: w - forward, s - backward, a - left, d - right\nq - to quit\n");
    //char key = getch();
    char key;
    scanf("%c", &key);
    if(key == 'w')
        {
            --hightX;
            if(hightX == 0)
                ++hightX;
        }
    else if(key == 's')
        {
            ++hightX;
            if(hightX == hight - 1)
                --hightX;
        }
    else if(key == 'a')
        {
            --widthY;
            if(widthY == 0)
                ++widthY;
        }
    else if(key == 'd')
        {
            ++widthY;
            if(widthY == width -1)
                --widthY;
        }
    else if(key == 'i')
        {
            if(hightX_1 > 1)
                hightX_1 --;
        }
    else if(key == 'k')
        {
            if(hightX_1 < hight - 2)
                hightX_1 ++;
        }
    else if(key == 'j')
        {
            if(widthY_1 > 1)
                widthY_1 --;
        }
    else if(key == 'l')
        {
            if(widthY_1 < width - 2)
                widthY_1 ++;
        }
    
    else if(key == 'q')
        return 1;
    return 0;
}