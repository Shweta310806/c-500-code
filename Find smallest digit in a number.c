#include <stdio.h>

int main() 
{
    int n, rem, min = 9;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (; n != 0; n /= 10) 
    {
        rem = n % 10;
        if (rem < min)
            min = rem;
    }

    printf("Smallest digit = %d", min);
    return 0;
}
