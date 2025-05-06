/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[20];
    char familyname[20];
    int n_size = 0;
    int f_size = 0;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your familyname: ");
    scanf("%s", familyname);
    n_size = strlen(name);
    f_size = strlen(familyname);
    printf("%10s %10s\n", name, familyname);
    printf("%10d %10d\n", n_size, f_size);
    return 0;

}*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[20];
    char familyname[20];
    int n_size = 0;
    int f_size = 0;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your familyname: ");
    scanf("%s", familyname);
    n_size = strlen(name);
    f_size = strlen(familyname);
    printf("%-10s %-10s\n", name, familyname);
    printf("%-10d %-10d\n", n_size, f_size);
    return 0;

}