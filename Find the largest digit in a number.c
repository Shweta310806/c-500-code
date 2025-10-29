<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int num, digit, largest = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(; num > 0; num = num / 10) 
    {
        digit = num % 10;
        if(digit > largest)
            largest = digit;
    }

    printf("Largest digit = %d", largest);

    return 0;
}
=======
#include <stdio.h>

int main() 
{
    int num, digit, largest = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(; num > 0; num = num / 10) 
    {
        digit = num % 10;
        if(digit > largest)
            largest = digit;
    }

    printf("Largest digit = %d", largest);

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
