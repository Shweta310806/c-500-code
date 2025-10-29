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
