#include <stdio.h>
#define SIZE 100

int main(void){
   double Duf = 100.0, Deid = 100.0;
   int year = 0;
   for(int i = 1; i <= SIZE; ++i){
      year++;
      Duf  = 100.0 + 10 * year;
      Deid *= 1.05;
      if(Deid > Duf){
         printf("Deidra's deposit will exceed Duf's after %d years.\n", year);
         break;
      }
   }
   return 0;
}   