#include <stdio.h>

int main() 
{
    int n, i, j, num[50], hcf;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);

    hcf = num[0];
    for (i = 1; i < n; i++) 
    {
        for (j = 1; j <= num[i] && j <= hcf; j++) 
        {
            if (num[i] % j == 0 && hcf % j == 0)
                hcf = j;
        }
    }

    printf("HCF = %d", hcf);
    return 0;
}
