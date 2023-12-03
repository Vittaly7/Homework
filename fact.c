/*int grid (int widthX, int hightY){
    int width = 20;
    int hight = 10;

       
    for(int i = 0; i < hight; i++){ // grid and initial symbol position



            
        for(int q = 0; q < width; q++){
            if(i == 0 || i == hight - 1 || q == 0 || q == width - 1){
                printf("#");
            }
            else if(i == hightY && q == widthX){
                printf("#");
                
            }
            else
                printf(" ");
        }
        printf("\n");
    
    }
}*/



/*#include <stdio.h>

int factorial(int n);

int main() {
    int n;
    scanf("%d", &n);
    printf("%d! = %d\n", n, factorial(n));
    return 0;
}

int factorial(int n) {
    if (n == 1)
        return 1;
    else
        return n * factorial(n-1);
}*/
/*#include <stdio.h>

int num_5(int n);

int main() {
    num_5(1);
    return 0;
}

int num_5(int n) {
    if (n == 100)
        return 0;

    int result = n % 5;
    if (result == 0)
        printf("%d ", n);
    n++;
    num_5(n);        
}*/

/*#include <stdio.h>

int prime(int K, int M);

int main() {
    
    int K;
    int M;
    scanf ("%d%d", &K, &M);
    prime(K, M);
    
    return 0;
}
int prime(int K, int M){
    if (K >= M + 1)
        return 0;
    if(K > 0)
        printf("%d ", K);
    K++;
    prime(K, M);
}*/
/*#include <stdio.h>

int main() {
    int temp = 0;
    int N = 10;
    int arr [] = {1, 3, 2, 4, 6, 5, 9, 7, 8, 0};

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < (N - 1) - i; ++j){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i < N; ++i)
        printf("%d ", arr[i]);

    return 0;
}*/
/*#include <stdio.h>

int array_out(int* array, int L, int temp);

int main (){

    int temp = 0;
    int L = 10;
    int array[L];
    array_out(array, L, temp);


    
    return 0;
}
int array_out(int* array, int L, int temp){
    for(int i = 0; i < L; ++i){
        scanf("%d", &array[i]);
    }
    for(int i = 0; i < L; ++i){ // +3
        for(int q = 0; q < L - i; ++q){   // оптимизация -i; + 4
            if(array[q] > array[q + 1]){ // + 4
                temp = array[q];
                array[q] = array[q + 1];
                array[q + 1] = temp; // + 9 || +0                
            }
        }
    }

    for(int i = 0; i < L; ++i)
        printf("%d ", *(array + i));

    return 0;
}*/
/*#include<stdio.h>
#include<string.h>

int main(void){
    char arr[] = {"dfgdgd", "gfhdfhh", "RFGHDFH", "Ron", "sdgdhdh", "dfdrhdrh", "fnfghfnh"};
    for(int i = 0; i < 7; i++){
        if(strcmp(arr[i], "Ron") == 0){
        printf("Found!\n");
        return 1;
        }
    }
    printf("Not found!\n");
    return 0;
}*/
#include <stdio.h>
#include <time.h>

int sort_rise_fall(int array[2][10], int temp);
int main (){
    int temp = 0;
    srand(time(NULL));
    int array [2][10]; //= {{3, 5, 7, 9, 3, 4, 1, 0, 8, 6},
                         //{6, 1, 5, 2, 3, 0, 7, 8, 9, 4}};
    for(int i  = 0; i < 2; ++i){
        for(int q = 0; q < 10; ++q){
            array [i][q] = rand() % 100;
        }
    }
    for(int i  = 0; i < 2; ++i){
        for(int q = 0; q < 10; ++q){
            printf("%d ", array [i][q]);
        }
            printf("\n");
    }
    printf("\n");

    sort_rise_fall(array, temp);    
    for(int i  = 0; i < 2; ++i){        
        for(int q = 0; q < 10; ++q){
            printf("%d ", array [i][q]);
        }
            printf("\n");
    }
    return 0;
}
    int sort_rise_fall(int array[2][10], int temp){
    for(int i = 0; i < 2; ++i){
        if(i == 0){
            for(int q = 0; q < 10; ++q){
                for(int j = 0; j < 10 - q - 1; ++j){
                    if(array[i][j] > array[i][j + 1]){
                        temp = array[i][j];
                        array[i][j] = array[i][j + 1];
                        array[i][j + 1] = temp;
                    }
                }                
            }
        }
        else{
            for(int q = 0; q < 10; ++q){
                for(int j = 0; j < 10 - q - 1; ++j){
                    if(array[i][j] < array[i][j + 1]){
                        temp = array[i][j];
                        array[i][j] = array[i][j + 1];
                        array[i][j + 1] = temp;
                    }
                }                
            }
        }
    }
}