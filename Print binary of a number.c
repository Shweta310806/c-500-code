#include <stdio.h>

int main() 
{
    int num, i;
    int binary[32];   
    int index = 0;

    printf("Enter a number: ");
    scanf("%d", &num);


    while(num > 0) 
    {
        binary[index] = num % 2;
        num = num / 2;
        index++;
    }

    printf("Binary representation is: ");


    for(i = index - 1; i >= 0; i--) 
    {
        printf("%d", binary[i]);
    }

    return 0;
}
