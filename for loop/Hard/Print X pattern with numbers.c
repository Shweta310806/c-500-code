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
