#include <stdio.h>

int main() 
{
    int n = 5678, rev = 0;
    for(; n != 0; n /= 10) 
    {
        rev = rev * 10 + (n % 10);
    }
    printf("Reversed number = %d", rev);

    return 0;
}
