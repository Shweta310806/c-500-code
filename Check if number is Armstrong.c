<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

int main() 
{
    int num, original, remainder, n = 0;
    double sum = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    while (original != 0)
    {
        original /= 10;
        n++;
    }

    original = num;

    while (original != 0) 
    {
        remainder = original % 10;
        sum += pow(remainder, n);
        original /= 10;
    }

    if ((int)sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
=======
#include <stdio.h>
#include <math.h>

int main() 
{
    int num, original, remainder, n = 0;
    double sum = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    while (original != 0)
    {
        original /= 10;
        n++;
    }

    original = num;

    while (original != 0) 
    {
        remainder = original % 10;
        sum += pow(remainder, n);
        original /= 10;
    }

    if ((int)sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
