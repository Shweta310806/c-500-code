<<<<<<< HEAD
#include <stdio.h>

int factorial(int n) 
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() 
{
    int num, temp, digit, sum;

    printf("Strong numbers between 1 and 1000 are:\n");

    for (num = 1; num <= 1000; num++) 
    {
        temp = num;
        sum = 0;

        
        while (temp > 0) 
        {
            digit = temp % 10;
            sum += factorial(digit);
            temp /= 10;
        }

        // Check if number is strong
        if (sum == num)
            printf("%d\n", num);
    }

    return 0;
}
=======
#include <stdio.h>

int factorial(int n) 
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() 
{
    int num, temp, digit, sum;

    printf("Strong numbers between 1 and 1000 are:\n");

    for (num = 1; num <= 1000; num++) 
    {
        temp = num;
        sum = 0;

        
        while (temp > 0) 
        {
            digit = temp % 10;
            sum += factorial(digit);
            temp /= 10;
        }

        // Check if number is strong
        if (sum == num)
            printf("%d\n", num);
    }

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
