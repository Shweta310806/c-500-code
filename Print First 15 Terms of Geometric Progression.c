#include <stdio.h>

int main() 
{
    int a, r;  
    long term;

    printf("Enter first term (a): ");
    scanf("%d", &a);
    printf("Enter common ratio (r): ");
    scanf("%d", &r);

    printf("First 15 terms of Geometric Progression:\n");

    term = a;
    for (int i = 1; i <= 15; i++) 
    {
        printf("%ld ", term);
        term = term * r;  
    }

    return 0;
}
