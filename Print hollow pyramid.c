<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int n, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
    
        for (space = i; space < n; space++)
            printf(" ");

        for (j = 1; j <= (2 * i - 1); j++) 
        {
            if (j == 1 || j == (2 * i - 1) || i == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
=======
#include <stdio.h>

int main() 
{
    int n, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
    
        for (space = i; space < n; space++)
            printf(" ");

        for (j = 1; j <= (2 * i - 1); j++) 
        {
            if (j == 1 || j == (2 * i - 1) || i == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
