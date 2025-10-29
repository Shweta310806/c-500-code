#include <stdio.h>

int main() 
{
    int n, rem, max = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (; n != 0; n /= 10) 
    {
        rem = n % 10;
        if (rem > max)
            max = rem;
    }

    printf("Largest digit = %d", max);
    return 0;
}
