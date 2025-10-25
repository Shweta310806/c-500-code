#include <stdio.h>

int main() 
{
    int rows, cols, i, j;
    int num = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for(i = 1; i <= rows; i++) 
    {

        if(i % 2 != 0) 
        {
            
            for(j = 1; j <= cols; j++) 
            {
                printf("%4d", num);
                num++;
            }
        } 
        else {
            
            int temp = num + cols - 1;
            for(j = 1; j <= cols; j++) 
            {
                printf("%4d", temp--);
            }
            num += cols;
        }
        printf("\n");
    }

    return 0;
}
