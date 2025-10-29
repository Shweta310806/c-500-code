#include <stdio.h>

int main() 
{
    int n, num, sum, i, rem;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum = 0;

        for (; num != 0; num /= 10)
            sum += num % 10;

        printf("Sum of digits = %d\n", sum);
    }

    return 0;
}
