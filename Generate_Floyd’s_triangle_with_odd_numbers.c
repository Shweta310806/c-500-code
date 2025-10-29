<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int i, j, rows;
    int num = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) 
    {
        for(j = 1; j <= i; j++) 
        {
            printf("%d ", num);
            num += 2;  
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
    int num = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) 
    {
        for(j = 1; j <= i; j++) 
        {
            printf("%d ", num);
            num += 2;  
        }
        printf("\n");
    }

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
