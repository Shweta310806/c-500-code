<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for(i = 1; i <= rows; i++) 
    {
        for(j = 1; j <= cols; j++) 
        {

            
            if(i == 1 || i == rows || j == 1 || j == cols) 
            {
                printf("%d ", j);
            } 
            else {
                printf("  "); 
            }
        }
        printf("\n");
    }

    return 0;
}
=======
#include <stdio.h>

int main() 
{
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for(i = 1; i <= rows; i++) 
    {
        for(j = 1; j <= cols; j++) 
        {

            
            if(i == 1 || i == rows || j == 1 || j == cols) 
            {
                printf("%d ", j);
            } 
            else {
                printf("  "); 
            }
        }
        printf("\n");
    }

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
