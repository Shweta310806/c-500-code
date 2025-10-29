<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int n, i, j;

    printf("Enter the size of the cross: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) 
    {
        for(j = 1; j <= n; j++) 
        {
            
            if(i == j || (i + j) == (n + 1))
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
    int n, i, j;

    printf("Enter the size of the cross: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) 
    {
        for(j = 1; j <= n; j++) 
        {
            
            if(i == j || (i + j) == (n + 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
