#include <stdio.h>

int main() 
{
    int arr[100];
    int n, i, num, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find frequency of: ");
    scanf("%d", &num);


    for (i = 0; i < n; i++) 
    {
        if (arr[i] == num)
            count++;
    }

    printf("Frequency of %d = %d\n", num, count);

    return 0;
}
