#include <stdio.h>

int main() 
{
    int i;

    printf("Number   Cube\n");
    printf("------------------\n");

    for(i = 1; i <= 15; i++) 
    {
        printf("%d\t  %d\n", i, i*i*i);
    }

    return 0;
}
