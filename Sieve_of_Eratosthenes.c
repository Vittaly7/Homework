/*int main ()
{
    int i = 4;
    int q = 4;
    
    if(i == q){
        printf("%d = %d\n", i, q);}
        else
        {
            printf("%d != %d", i, q);
        }
    }*/
/*#include <stdio.h>

int main() {
  int a,b;// put your code here
    char c = 0;
    double res = 0;
    scanf ("%d %d %c", &a, &b, &c);
    switch (c){
        case '+': res = a+b; printf("%.2f\n",res); break;
        case '-': res = a-b; printf("%.2f\n",res); break;
        case '*': res = a*b; printf("%.2f\n",res); break;
        case '/':
            switch (b){
                case 0: printf ("ERROR!\n"); break;                    
                default: res = (double)a/b; printf("%.2f\n",res); break;
                }
            break;
        default: printf("ERROR!\n");break;
    }
    
    return 0;
}*/
    
/*#include <stdio.h>

int main (){
    int a = 0;
    int* ptr = &a;
    scanf("%d", ptr);
    *ptr += 10;
    *ptr -= 20;
    *ptr *= 5;
    *ptr /= 3;
    printf("\n%d", *ptr);

    return 0;
}*/
/*#include <stdio.h>

int main()
{
    int arr [9][9];
    
    for (int i = 1; i < 9; i++)
    {
        for (int q = 1; q < 9; q++)
    {
        arr[q][i] = q*i;
        if(q == 5)
        arr[q][i] = 5;
        else if(i == 5)
        arr[q][i] = 5;
        printf("%d\t", arr[q][i]);
        
    }
        printf("\n");
    }
    return 0;
    
}*/

/*#include <stdio.h>

void swap (int* first, int* second){
    int temp;

    temp = *first;
    *first = *second;
    *second = temp;

    return;
}

int main (){

    int a = 100;
    int b = 200;

    printf ("before swap:\na = %d\nb = %d\n", a, b);

    swap (&a, &b);
    printf ("after swap:\na = %d\nb = %d\n", a, b);

    return 0;

}*/
/*#include <stdio.h>
int minn (int array[], int len);
int main (){
    int array_1[] = {0,6,2,1,7,8,9,4,5,34};
    int array_2[] = {6,2,7,8,4,5};
    int min_1 = minn (array_1, 10);
    int min_2 = minn (array_2, 6);
    printf("%d\n", min_1);
    printf("%d\n", min_2);

    return 0;
}
int minn (int array[], int len){
    int min = 9;
    min = array[0];
    for(int i = 1; i < len; i++){
        if(array[i] < min)
            min = array[i];
    }
    return min;
}*/
/*#include <stdio.h>

int find_max(int array[], int len);

int main(){
    int len_1 = 15;
    int len_2 = 7;
    int array[] = {6,5,4,3,2,1,0,9,8,7,23,56,74,98,1999};
    int array_2[] = {1,5,9,45,3,54,985};
    int max = find_max(array, len_1);
    int max_2 = find_max(array_2, len_2);
    printf("%d\n", max);
    printf("%d\n", max_2);

    return 0;
}
int find_max(int array[], int len)
{
    int max = 0;
    max = array[0];
    for(int i = 1; i < len; ++i){
        if(array[i] > max)
            max = array[i];
    }
    return max;
}*/
/*#include<stdio.h>

int count(int array[], int length, int num);

int main(){

    int num = 8;
    int array[] = {8,6,8,2,8,9,4,8,4,3};
    int occurence = count(array, 10, num);
    printf("%d\n", occurence);

    return 0;
}

int count(int array[], int length, int num){
    int c = 0;
    for(int i = 0; i < 10; i++){
        if(array[i] == num)
        c++;
    }
    return c;
}*/
/*#include<stdio.h>

int swap(int array[], int length);

int main (){

    int array1[] = {1,3,5,7,9,0,8,6,4,2};
    int array2[] = {9,8,7,6,3,2};
    swap(array1, 10);
    swap(array2, 6);

    return 0;
}
int swap(int array[], int length){

    int temp = 0;
        for(int i = 0; i < (length / 2); ++i){
            temp = array[i];
            array[i] = array[length - i - 1];
            array[length - i - 1] = temp;
        }
    for(int i = 0; i< length; ++i)
        printf("%d ", array[i]);
        printf("\n");

}
#include <stdio.h>

int main() {
    int array[5] = {0};
    int even = 0;
    int odd = 0;
    for(int i = 0; i < 5; ++i){
        scanf("%d", &array[i]);
        array[i] % 2 == 0? even++ : odd++;
    }
    printf("%d", odd - even);
    return 0;
    }*/
/*#include <stdio.h>

int main() {
    int arr[5] = {0};
    int count = 0;
    int result = 0;
    for(int i = 0; i < 5; ++i){
        scanf("%d", &arr[i]);
        arr[i] == 0? count++ : count --;
    }
    if(count == 5){
        printf("%d\n", 0);
    }
    else{
        for(int j = 0; j < 5; ++j){
            if(arr[j] != 0){
                arr[j] *= arr[j];
            }
        }
    }
    for(int k = 0; k < 5; ++k){
        result += arr[k];
    }
    printf("%d", result);
    
    return 0;
}*/
/*#include <stdio.h>
#include <stdbool.h>

#define ROWS 3
#define COLS 3

bool compare(int arr1[ROWS][COLS], int arr2[ROWS][COLS]);

int main(){
    
    int arr1[ROWS][COLS] = {{1,2,3},
                            {4,5,6},
                            {7,8,9}};

    int arr2[ROWS][COLS] = {{1,2,3},
                            {4,5,6},
                            {7,8,9}};
    if(compare(arr1,arr2))
        printf("arr1 = arr2\n");
    else
        printf("arr1 != arr2\n");

    return 0;
}
bool compare(int arr1[ROWS][COLS], int arr2[ROWS][COLS]){
    for(int i = 0; i < ROWS; ++i)
        for(int j = 0; j < COLS; ++j)
            if(arr1[i][j] != arr2[i][j])
                return false;
    return true;
}*/
/*#include <stdio.h>

int main() {
    int N;
    int left_sum = 0;
    int right_sum = 0;
    scanf("%d", &N);
    int arr[N][N];
    for (int i = 0; i < N; ++i)
        for(int j = 0; j < N; ++j){
            scanf("%d", &arr[i][j]);
            if(i < N - 1 - j)
                left_sum += arr[i][j];
            else if(i > N - 1 - j)
                    right_sum += arr[i][j];
        }
    left_sum >= right_sum ? printf("%d %d", left_sum, right_sum) : printf("%d %d", right_sum, left_sum);
  return 0;
}*/

/*#include <stdio.h>

int main() {
    int a = 2;
    int N = 0;
    scanf("%d", &N);
    int array[N][N];
    for(int i = 0; i < N; ++i){
        a = 2;
        for(int j = 0; j < N; ++j){
            array[i][j] = 0;
            if(i == j){
                array[i][j] = 1;
            }
            if(j > i){
                array[i][j] = a;
                a++;
            }
            if(i > j){
                array[i][j] = j + 1;
                j--;
            }
         }
    }
    for(int i = 0; i < N; ++i){
                for(int j = 0; j < N; ++j){
                    printf("%d ", array[i][j]);
                  }
    printf("\n");
}
  return 0;
}*/
/*#include <stdio.h>
#include <stdbool.h>
#define N 100

void sieve();
int main(){

    sieve();

    return 0;
}
void sieve(){

    int fill[N];
    for(int i = 0; i < N; ++i){
        fill[i] = i;
    }
    fill[0] = fill[1] = 0;
    for(int i = 2; i < N; ++i){
        if(fill[i] == 0)
            continue;
        for(int j = i + 1; j < N; ++j){
            if(fill[j] == 0)
                continue;
            if(fill[j] % fill[i] == 0)
                fill[j] = 0;
        }
    }
    for(int i = 0; i < N; ++i)
        printf("%d ", fill[i]);

}*/

#include<stdio.h>

int check(int N);

int main(){
    int N = 0;
    scanf("%d", &N);
    if(check(N))
        printf("%d is a prime number\n", N);
    else
        printf("%d is not a prime number\n", N);
        
    return 0;
}
int check(int N){
    if(N < 2)
        return 0;
    for(int i = 2; i < N; ++i){
        if(N % i == 0)
            return 0;
        else
            return 1;
    }
}