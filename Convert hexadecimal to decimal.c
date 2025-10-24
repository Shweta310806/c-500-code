#include <stdio.h>
#include <string.h>
#include <math.h>

int main() 
{
    char hex[20];
    int len, i, decimal = 0, base = 1;
    char ch;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    len = strlen(hex);

    
    for (i = len - 1; i >= 0; i--) 
    {
        ch = hex[i];

        if (ch >= '0' && ch <= '9')
            decimal += (ch - '0') * base;
        else if (ch >= 'A' && ch <= 'F')
            decimal += (ch - 'A' + 10) * base;
        else if (ch >= 'a' && ch <= 'f')
            decimal += (ch - 'a' + 10) * base;
        else 
        {
            printf("Invalid hexadecimal number.\n");
            return 0;
        }

        base *= 16;
    }

    printf("Decimal equivalent of %s = %d\n", hex, decimal);

    return 0;
}
