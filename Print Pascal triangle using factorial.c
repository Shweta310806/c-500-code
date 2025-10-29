<<<<<<< HEAD
#include <stdio.h>

int factorial(int n) 
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
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

        for (j = 0; j <= i; j++) {
            int num = factorial(i) / (factorial(j) * factorial(i - j));
            printf("%4d", num);
        }

        printf("\n");
    }

    return 0;
}
=======
#include <stdio.h>

int factorial(int n) 
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
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

        for (j = 0; j <= i; j++) {
            int num = factorial(i) / (factorial(j) * factorial(i - j));
            printf("%4d", num);
        }

        printf("\n");
    }

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
