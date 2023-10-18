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
    int a,b;
    char c;
    scanf ("%c%d%d",&c,&a,&b);
    switch (c){
        case '+': printf("%f",a+b); break;
        case '-': printf("%f",a-b); break;
        case '*': printf("%f",a*b); break;
        case '/': printf("%f",a/b); break;
            switch (b){
                case 0: printf ("ERROR!"); break;
                }
                default: printf("ERROR!");break;

    }
  return 0;
}*/
#include <stdio.h>

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
}