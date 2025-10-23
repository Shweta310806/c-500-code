#include <stdio.h>

int main() 
{
    int a, d;  
    int term;

    printf("Enter first term (a): ");
    scanf("%d", &a);
    printf("Enter common difference (d): ");
    scanf("%d", &d);

    printf("First 20 terms of Arithmetic Progression:\n");

    term = a;
    for (int i = 1; i <= 20; i++) 
    {
        printf("%d ", term);
        term = term + d;  
    }

    return 0;
}
