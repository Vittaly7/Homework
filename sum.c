#include <stdio.h>


int main ()
{
    int a = 0;
    scanf("%d", a);
    
    fact(a);
    
    return 0;
}

int fact(int a){

    if(a == 1){
        a * (a - 1);
    }
}

