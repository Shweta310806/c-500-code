#include <stdio.h>
int main() 
{
    int n = 6;
    // Upper pyramid
    for(int i = 1; i <= n; i++) 
    {
        for(int space = i; space < n; space++) 
        {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) 
        {
            printf("* ");
        }
        printf("\n");
    }
    // Lower pyramid
    for(int i = n-1; i >= 1; i--) 
    {
        for(int space = i; space < n; space++) 
        {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) 
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}