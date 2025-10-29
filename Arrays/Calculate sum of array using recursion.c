#include <stdio.h>

int sumArray(int arr[], int n) 
{

    if (n == 0)
        return 0;
    else
        
        return arr[n - 1] + sumArray(arr, n - 1);
}

int main() 
{
    int arr[100], n, i;
    int sum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sum = sumArray(arr, n);

    printf("Sum of array elements = %d\n", sum);

    return 0;
}
