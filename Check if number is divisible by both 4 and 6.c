#include <stdio.h>

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 4 == 0 && num % 6 == 0)
        printf("%d is divisible by both 4 and 6.\n", num);
        
    else
        printf("%d is not divisible by both 4 and 6.\n", num);

    return 0;
}
