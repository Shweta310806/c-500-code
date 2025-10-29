<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num / 2; i++) 
    {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        printf("%d is a Perfect number.\n", num);
    else
        printf("%d is not a Perfect number.\n", num);

    return 0;
}
=======
#include <stdio.h>

int main() 
{
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num / 2; i++) 
    {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        printf("%d is a Perfect number.\n", num);
    else
        printf("%d is not a Perfect number.\n", num);

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
