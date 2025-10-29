<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int n, i, j, isPrime, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        isPrime = 1; 

        
        for (j = 2; j <= i / 2; j++) 
        {
            if (i % j == 0) 
            {
                isPrime = 0;
                break;
            }
        }

        
        if (isPrime)
            sum += i;
    }

    printf("Sum of all prime numbers up to %d = %d\n", n, sum);

    return 0;
}
=======
#include <stdio.h>

int main() 
{
    int n, i, j, isPrime, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        isPrime = 1; 

        
        for (j = 2; j <= i / 2; j++) 
        {
            if (i % j == 0) 
            {
                isPrime = 0;
                break;
            }
        }

        
        if (isPrime)
            sum += i;
    }

    printf("Sum of all prime numbers up to %d = %d\n", n, sum);

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
