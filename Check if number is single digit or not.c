#include <stdio.h>

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= -9 && num <= 9)
        printf("Single-digit number\n");
    else
        printf("Not a single-digit number\n");

    return 0;
}
