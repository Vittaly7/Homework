#include <stdio.h>

int main(void){
    const int first_oz = 46;
    const int second_oz = 20;
    int ounses, cost;
    printf(" ounses   tarif\n");
    for(ounses = 1, cost = first_oz; ounses <= 16; ounses++, cost += second_oz){
        printf("%5d %8.2f $\n", ounses, cost / 100.0);
    }
    return 0;
}