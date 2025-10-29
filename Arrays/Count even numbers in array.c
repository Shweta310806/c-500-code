#include <stdio.h>

int main() 
{
    int arr[100];
    int n, i, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < n; i++) 
    {
        if (arr[i] % 2 == 0)
            count++;
    }

    printf("Total even numbers = %d\n", count);

    return 0;
}
