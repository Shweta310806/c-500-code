<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int num, temp, rem, rev;

    printf("Palindrome numbers between 1 and 200 are:\n");

    for (num = 1; num <= 200; num++) 
    {
        temp = num;
        rev = 0;

        
        for (int n = num; n != 0; n /= 10) 
        {
            rem = n % 10;
            rev = rev * 10 + rem;
        }

        if (rev == temp)
            printf("%d ", num);
    }

    return 0;
}
=======
#include <stdio.h>

int main() 
{
    int num, temp, rem, rev;

    printf("Palindrome numbers between 1 and 200 are:\n");

    for (num = 1; num <= 200; num++) 
    {
        temp = num;
        rev = 0;

        
        for (int n = num; n != 0; n /= 10) 
        {
            rem = n % 10;
            rev = rev * 10 + rem;
        }

        if (rev == temp)
            printf("%d ", num);
    }

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
