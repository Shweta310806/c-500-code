#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the size of matrix (n): ");
    scanf("%d", &n);

    int a[n][n];
    int value = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while(top <= bottom && left <= right) 
    {

        for(int i = left; i <= right; i++)
            a[top][i] = value++;
        top++;

        for(int i = top; i <= bottom; i++)
            a[i][right] = value++;
        right--;

        for(int i = right; i >= left; i--)
            a[bottom][i] = value++;
        bottom--;

        for(int i = bottom; i >= top; i--)
            a[i][left] = value++;
        left++;
    }

    printf("\nSpiral Matrix:\n");
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < n; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }

    return 0;
}
