#include <stdio.h>

int main() 
{
    int n, temp, rem, fact, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    for (; n != 0; n /= 10) 
    {
        rem = n % 10;
        fact = 1;
        for (i = 1; i <= rem; i++)
            fact *= i;
        sum += fact;
    }

    if (sum == temp)
        printf("Strong number");
    else
        printf("Not a Strong number");

    return 0;
}
