/*#include <stdio.h>
const int SIZE = 8;

int main(void){
    double arr_1[SIZE];
    double arr_2[SIZE];
    for(int i = 0; i < SIZE; ++i){
        arr_1[i] = i + 1;
        double sum = 0;
        for(int j = 0; j <= i; ++j){
            sum += arr_1[j];
        }
        arr_2[i] = sum;
        }
    for(int i = 0; i < SIZE; ++i){
        printf("%3.0f ", arr_1[i]);
    }
    printf("\n");
    for(int j = 0; j < SIZE; ++j){
        printf("%3.0f ", arr_2[j]);
    }
    printf("\n");
        
        return 0;
}*/
#include <stdio.h>
#define SIZE 8

int main(void){
    double arr1[SIZE] = {0};
    double arr2[SIZE] = {0};
    double sum = 0;
    for(int i = 0; i < SIZE; ++i){
        arr1 [i] = i + 1;
    }
    for(int j = 0; j < SIZE; ++j){
        sum += arr1[j];
        arr2[j] = sum;
    }
    for(int i = 0; i < SIZE; ++i){
        printf("%3.0f ", arr1[i]);
    }
    printf("\n");
    for(int j = 0; j < SIZE; ++j){
        printf("%3.0f ", arr2[j]);
    }
    printf("\n");
    return 0;
}