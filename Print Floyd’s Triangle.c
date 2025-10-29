<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int n, num = 1;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("Floyd's Triangle:\n");

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
=======
#include <stdio.h>

int main() 
{
    int n, num = 1;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("Floyd's Triangle:\n");

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
