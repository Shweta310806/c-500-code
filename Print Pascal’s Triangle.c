<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int coef, row, col;

    for (row = 0; row < 5; row++) 
    {     
        
        for (col = 5; col > row; col--)
            printf(" ");

        
        coef = 1;
        for (col = 0; col <= row; col++) 
        {
            printf("%d ", coef);
            coef = coef * (row - col) / (col + 1);
        }

        printf("\n");
    }

    return 0;
}
=======
#include <stdio.h>

int main() 
{
    int coef, row, col;

    for (row = 0; row < 5; row++) 
    {     
        
        for (col = 5; col > row; col--)
            printf(" ");

        
        coef = 1;
        for (col = 0; col <= row; col++) 
        {
            printf("%d ", coef);
            coef = coef * (row - col) / (col + 1);
        }

        printf("\n");
    }

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
