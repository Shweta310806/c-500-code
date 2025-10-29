<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int n, i, j;

    printf("Enter the size of the pattern: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= n; j++) 
        {

            if (j == i || (j + i) == (n + 1))
                printf("%d", j);
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
    int n, i, j;

    printf("Enter the size of the pattern: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= n; j++) 
        {

            if (j == i || (j + i) == (n + 1))
                printf("%d", j);
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
