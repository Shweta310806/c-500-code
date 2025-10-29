<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int n, flag = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n <= 1)
        flag = 1;

    for (int i = 2; i <= n / 2; i++) 
    {
        if (n % i == 0) 
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("%d is Prime", n);
    else
        printf("%d is Not Prime", n);

    return 0;
}
=======
#include <stdio.h>

int main() 
{
    int n, flag = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n <= 1)
        flag = 1;

    for (int i = 2; i <= n / 2; i++) 
    {
        if (n % i == 0) 
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("%d is Prime", n);
    else
        printf("%d is Not Prime", n);

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
