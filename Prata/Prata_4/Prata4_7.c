/*#include <stdio.h>
#include <float.h>


int main(void)
{
    double num_1 = 1.0 / 3.0;
    float num_2 = 1.0f / 3.0f;
    printf("%.4f, %.12f, %.16f\n", num_1, num_1, num_1);
    printf("%.4f, %.12f, %.16f\n", num_2, num_2, num_2);
    printf("%d, %d\n", FLT_DIG, DBL_DIG);
    return 0;
}*/
#include <stdio.h>
#include <float.h>

int main(void)
{
    double doub = 1.0 / 3.0;
    float fl = 1.0f / 3.0f;

    printf("\nOutput:\n");
    printf("---------------------------------------\n");
    /* table header */
    printf("%-20s %-20s\n", "double", "float");
    /* the table itself */  
    printf("%-20.4f %-20.4f\n", doub, fl);
    printf("%-20.12f %-20.12f\n", doub, fl);
    printf("%-20.16f %-20.16f\n", doub, fl);
    printf("---------------------------------------\n");
    printf("DBL_DIG = %d, FLT_DIG = %d.\n", DBL_DIG, FLT_DIG);

    /* Conclusion: the derived values are inconsistent. */

    return 0;
}