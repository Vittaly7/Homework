#include <stdio.h>
int sum(int a, int b);

int main(void){
    int low, high;
    printf("Enter the lower and the higher nomber of the range: ");
    scanf("%d %d", &low, &high);
    int result = 0;
    while(low < high){
        result = sum(low, high);
        printf("The sum of the square numbers between %d and %d is %d\n", low, high, result);
        printf("Enter the lower and the higher nomber of the range: ");
        scanf("%d %d", &low, &high);
    }
    return 0;
}
int sum(int a, int b){
    int sum = 0;    
    for(int i = a; i<= b; i++){
        sum += i * i;
    }
    return sum;
}