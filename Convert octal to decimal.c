#include <stdio.h>
#include <math.h>

int main() 
{
    long long octal;
    int decimal = 0, base = 1, rem;

    printf("Enter an octal number: ");
    scanf("%lld", &octal);

    long long temp = octal;

    while (temp > 0) 
    {
        rem = temp % 10;         
        decimal += rem * base;   
        base *= 8;
        temp /= 10;
    }

    printf("Decimal equivalent of %lld = %d\n", octal, decimal);

    return 0;
}
