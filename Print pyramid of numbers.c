#include <stdio.h>

int main() 
{
    int rows, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) 
    {
    
        for(space = i; space < rows; space++) 
        {
            printf("  ");
        }

        
        for(j = 1; j <= i; j++) 
        {
            printf("%d ", j);
        }

        
        for(j = i - 1; j >= 1; j--) 
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
