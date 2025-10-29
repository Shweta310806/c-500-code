#include <stdio.h>

int main() 
{
    int num;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Octal equivalent of %d = %o\n", num, num);

    return 0;
}
