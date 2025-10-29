<<<<<<< HEAD
#include <stdio.h>

int fact(int n) 
{
    int i, f = 1;
    for(i = 1; i <= n; i++)
        f = f * i;
    return f;
}

int nCr(int n, int r) 
{
    return fact(n) / (fact(r) * fact(n - r));
}

int main() 
{
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++) 
    {

        for(j = 0; j < rows - i; j++)
            printf(" ");

        for(j = 0; j <= i; j++)
            printf("%d ", nCr(i, j));

        printf("\n");
    }

    return 0;
}
=======
#include <stdio.h>

int fact(int n) 
{
    int i, f = 1;
    for(i = 1; i <= n; i++)
        f = f * i;
    return f;
}

int nCr(int n, int r) 
{
    return fact(n) / (fact(r) * fact(n - r));
}

int main() 
{
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++) 
    {

        for(j = 0; j < rows - i; j++)
            printf(" ");

        for(j = 0; j <= i; j++)
            printf("%d ", nCr(i, j));

        printf("\n");
    }

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
