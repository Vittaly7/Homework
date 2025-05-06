
#include <stdio.h>
#include <string.h>

int main(void){
    char word[20];
    printf("Enter a word: ");
    scanf("%s", word);
    for (int i = 0; i < strlen(word); ++i){
        printf("%c", word[strlen(word) - i - 1]);
    }
    printf("\n");
    //printf("your word takes %ld letters and takes %ld bytes in memory.\n", strlen(word), sizeof(word));
    //just to remember
    return 0;
}