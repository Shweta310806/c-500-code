#include <stdio.h>

int main(void) 
{
    int n;
    printf("Enter number of elements: ");

    if (scanf("%d", &n) != 1 || n <= 0) 
    return 0;
    int arr[n];
    long sum = 0;
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) 
    {
         scanf("%d", &arr[i]); sum += arr[i]; 
    }
    double avg = (double)sum / n;
    printf("Sum = %ld\nAverage = %.2f\n", sum, avg);
    return 0;
}
