<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int n, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) 
    {
        
        for (space = n; space > i; space--)
            printf("  ");

        
        for (j = 1; j <= i; j++)
            printf("%d ", j);

        
        for (j = i - 1; j >= 1; j--)
            printf("%d ", j);

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

    for (i = n; i >= 1; i--) 
    {
        
        for (space = n; space > i; space--)
            printf("  ");

        
        for (j = 1; j <= i; j++)
            printf("%d ", j);

        
        for (j = i - 1; j >= 1; j--)
            printf("%d ", j);

        printf("\n");
    }

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
