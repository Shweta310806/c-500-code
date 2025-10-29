<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    
    for(i = 1; i <= n; i++) 
    {

        for(j = 1; j <= i; j++)
            printf("*");

        for(j = 1; j <= 2*(n - i); j++)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    for(i = n; i >= 1; i--) 
    {

        for(j = 1; j <= i; j++)
            printf("*");

        for(j = 1; j <= 2*(n - i); j++)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
=======
#include <stdio.h>

int main() 
{
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    
    for(i = 1; i <= n; i++) 
    {

        for(j = 1; j <= i; j++)
            printf("*");

        for(j = 1; j <= 2*(n - i); j++)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    for(i = n; i >= 1; i--) 
    {

        for(j = 1; j <= i; j++)
            printf("*");

        for(j = 1; j <= 2*(n - i); j++)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
