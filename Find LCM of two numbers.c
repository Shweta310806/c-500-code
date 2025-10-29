<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (lcm = (a > b ? a : b); ; lcm++) 
    {
        if (lcm % a == 0 && lcm % b == 0) 
        {
            printf("LCM = %d", lcm);
            break;
        }
    }

    return 0;
}
=======
#include <stdio.h>

int main() 
{
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (lcm = (a > b ? a : b); ; lcm++) 
    {
        if (lcm % a == 0 && lcm % b == 0) 
        {
            printf("LCM = %d", lcm);
            break;
        }
    }

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
