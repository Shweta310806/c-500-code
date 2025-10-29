<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int base, exp;
    long power = 1;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    for (int i = 1; i <= exp; i++)
        power *= base;

    printf("%d^%d = %ld", base, exp, power);
    return 0;
}
=======
#include <stdio.h>

int main() 
{
    int base, exp;
    long power = 1;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    for (int i = 1; i <= exp; i++)
        power *= base;

    printf("%d^%d = %ld", base, exp, power);
    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
