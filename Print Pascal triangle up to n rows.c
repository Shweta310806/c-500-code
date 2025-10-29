#include <stdio.h>

int factorial(int n) 
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int combination(int n, int r) 
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() 
{
    int n, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {

        for (space = 0; space < n - i - 1; space++)
            printf("  ");

        for (j = 0; j <= i; j++)
            printf("%4d", combination(i, j));

        printf("\n");
    }

    return 0;
}
