#include <stdio.h>

int main() 
{
    int n, i, evenCount = 0, oddCount = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) 
    {
        if(i % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("Total Even Numbers = %d\n", evenCount);
    printf("Total Odd Numbers  = %d\n", oddCount);

    return 0;
}
