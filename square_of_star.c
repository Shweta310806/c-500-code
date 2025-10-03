#include <stdio.h>
int main() 

{
    int rows, i, j, k ;

    printf("Enter the no. of rows of square: ");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++) 
    {
        for(int j = 1; j <= rows; j++) 
        {
            printf(" ");
        }
        for (k=1; k<=rows;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
