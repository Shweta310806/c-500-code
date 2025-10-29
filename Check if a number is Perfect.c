<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) 
    {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        printf("Perfect number");
    else
        printf("Not Perfect number");

    return 0;
}
=======
#include <stdio.h>

int main() 
{
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) 
    {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        printf("Perfect number");
    else
        printf("Not Perfect number");

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
