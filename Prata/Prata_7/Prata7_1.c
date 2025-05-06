/*#include <stdio.h>

int main(void){
    const int FREEZING = 0;
    float temperature;
    int cold_days = 0;
    int all_days = 0;
    printf("Input a list of minimum trmperatures.\n");
    printf("Use celsius scale.\n");
    while(scanf("%f", &temperature) == 1){
        all_days++;
        if(temperature < FREEZING)
            cold_days++;
    }
    if(all_days != 0){
        printf("%d - is the total number od days: %.2lf%% with the temperature below zero.\n", all_days, 100.0 * (float)cold_days/all_days);
    }
    if(all_days == 0){
        printf("Data is not imput.\n");
    }
    return 0;
}*/
/*#include <stdio.h>
int main(void){
    char ch;
    int space = 0;
    int new_line = 0;
    int rest = 0;
    while((ch = getchar()) != '#'){
        if(ch == ' ')
            space++;
        else if(ch == '\n')
            new_line++;
        else
            rest++;
    }
    printf("The number of spaces is %d\n", space);
    printf("The number of new lines is %d\n", new_line);
    printf("The number of other characters is %d\n", rest);
    return 0;
}*/
#include <stdio.h>
int main(void){
    char ch;
    int space = 0;
    int new_line = 0;
    int rest_char = 0;
    while((ch = getchar()) != '#'){
        switch (ch){
            case ' ':
                space++;
                break;
            case '\n':
                new_line++;
                break;
            default:
                rest_char++;
                break;
        }
    }
    printf("The number of spaces is %d.\n", space);
    printf("The number of new lines is %d.\n", new_line);
    printf("The number of other characters is %d.\n", rest_char);
    return 0;
}