<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) 
    {

        for(j = 1; j <= rows - i; j++) 
        {
            printf(" ");
        }

        for(j = 1; j <= i; j++) 
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
=======
#include <stdio.h>

int main() 
{
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) 
    {

        for(j = 1; j <= rows - i; j++) 
        {
            printf(" ");
        }

        for(j = 1; j <= i; j++) 
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
