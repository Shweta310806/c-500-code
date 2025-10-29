<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int dec, bin = 0, base = 1, rem;

    printf("Enter a decimal number: ");
    scanf("%d", &dec);

    for (; dec > 0; dec /= 2) 
    {
        rem = dec % 2;
        bin += rem * base;
        base *= 10;
    }

    printf("Binary = %d", bin);
    return 0;
}
=======
#include <stdio.h>

int main() 
{
    int dec, bin = 0, base = 1, rem;

    printf("Enter a decimal number: ");
    scanf("%d", &dec);

    for (; dec > 0; dec /= 2) 
    {
        rem = dec % 2;
        bin += rem * base;
        base *= 10;
    }

    printf("Binary = %d", bin);
    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
