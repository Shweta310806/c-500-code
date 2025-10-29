#include <stdio.h>

int main() 
{
    int num = 1;

    printf("Numbers in 3x3 Matrix Form:\n\n");

    for (int i = 1; i <= 3; i++) 
    {          
        for (int j = 1; j <= 3; j++) 
        {      
            printf("%d\t", num);            
            num++;
        }
        printf("\n");                       
    }

    return 0;
}
