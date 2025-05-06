#include <stdio.h>
#include <string.h>
#define SIZE 255

int main(void){
    char string[SIZE];
    for(int i = 0; i < SIZE; ++i){
        scanf("%c", &string[i]);
        if(string[i] == '\n'){
            string[i] = '\0';
            break;
        }
    }
    int arr_size = 0;
    arr_size = strlen(string);
    for(int i = 0; i < arr_size; ++i){
        printf("%c", string[arr_size - i - 1]);
    }
    printf("\n");
    return 0;
}