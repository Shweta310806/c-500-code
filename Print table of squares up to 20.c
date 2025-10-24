#include <stdio.h>

int main() 
{
    int i;

    printf("Number   Square\n");
    printf("-------------------\n");

    for(i = 1; i <= 20; i++) 
    {
        printf("%d\t   %d\n", i, i*i);
    }

    return 0;
}
