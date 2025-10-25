#include <stdio.h>

int main() 
{
    int num;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Hexadecimal equivalent of %d = %X\n", num, num);

    return 0;
}
