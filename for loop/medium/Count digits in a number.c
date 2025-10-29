#include <stdio.h>

int main() 
{
    long n;
    int count = 0;

    printf("Enter a number: ");
    scanf("%ld", &n);

    for (; n != 0; n /= 10)
        count++;

    printf("Total digits = %d", count);
    return 0;
}
