#include <stdio.h>
int main() 
{
    int i;
    for(i = 11; i <= 20; i++) 
    {
        printf("%d^3 = %d\n", i, i * i * i);
    }
    return 0;
}
