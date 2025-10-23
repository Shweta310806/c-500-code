#include <stdio.h>

int main()
 {
    int n, temp, rem, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;
    for (; n != 0; n /= 10) 
    {
        rem = n % 10;
        sum += rem * rem * rem;
    }

    if (sum == temp)
        printf("Armstrong number");
    else
        printf("Not Armstrong");

    return 0;
}
