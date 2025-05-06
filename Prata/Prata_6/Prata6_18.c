#include <stdio.h>

int main(void){
    int friends_num = 5;
    int week = 1;
    while(friends_num <= 150){
        printf("Week %d: %d friends\n", week, friends_num);        
        friends_num = (friends_num - week) * 2;
        week ++;
    }
    return 0;
}