<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int bin, dec = 0, base = 1, rem;

    printf("Enter a binary number: ");
    scanf("%d", &bin);

    for (; bin > 0; bin /= 10) 
    {
        rem = bin % 10;
        dec += rem * base;
        base *= 2;
    }

    printf("Decimal = %d", dec);
    return 0;
}
=======
#include <stdio.h>

int main() 
{
    int bin, dec = 0, base = 1, rem;

    printf("Enter a binary number: ");
    scanf("%d", &bin);

    for (; bin > 0; bin /= 10) 
    {
        rem = bin % 10;
        dec += rem * base;
        base *= 2;
    }

    printf("Decimal = %d", dec);
    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
