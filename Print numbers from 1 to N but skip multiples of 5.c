#include <stdio.h>

int main() 
{
    int n, i;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) 
    {
        if(i % 5 == 0) 
        {
            continue;  
        }
        printf("%d ", i);
    }

    return 0;
}
