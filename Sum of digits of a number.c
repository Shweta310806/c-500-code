<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int n = 5678;
    int sum = 0;

    for(; n != 0; n /= 10) 
    {
        sum += n % 10;
    }

    printf("Sum of digits = %d", sum);
    return 0;
}
=======
#include <stdio.h>

int main() 
{
    int n = 5678;
    int sum = 0;

    for(; n != 0; n /= 10) 
    {
        sum += n % 10;
    }

    printf("Sum of digits = %d", sum);
    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
