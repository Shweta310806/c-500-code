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
