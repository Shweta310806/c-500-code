#include <stdio.h>

int main() 
{
    int n = 5678;
    int sum = 0;

    for(; n != 0; n /= 10) 
    {
        sum += n % 10;
    }

    printf("Sum of digits = %d", sum);
    return 0;
}
