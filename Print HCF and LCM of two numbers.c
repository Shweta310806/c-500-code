<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int a, b, temp, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;

    while (b != 0) 
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;

    lcm = (x * y) / hcf;

    printf("HCF = %d\n", hcf);
    printf("LCM = %d\n", lcm);

    return 0;
}
=======
#include <stdio.h>

int main() 
{
    int a, b, temp, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;

    while (b != 0) 
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;

    lcm = (x * y) / hcf;

    printf("HCF = %d\n", hcf);
    printf("LCM = %d\n", lcm);

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
