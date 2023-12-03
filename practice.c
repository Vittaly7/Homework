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

#include <stdio.h>

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

}