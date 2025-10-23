#include <stdio.h>

int main() 
{
    int n, r;
    long fact_n = 1, fact_r = 1, fact_nr = 1;
    long nCr;

    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    for (int i = 1; i <= n; i++)
        fact_n *= i;
    for (int i = 1; i <= r; i++)
        fact_r *= i;
    for (int i = 1; i <= n - r; i++)
        fact_nr *= i;

    nCr = fact_n / (fact_r * fact_nr);
    printf("nCr = %ld", nCr);
    return 0;
}
