<<<<<<< HEAD
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
=======
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
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
