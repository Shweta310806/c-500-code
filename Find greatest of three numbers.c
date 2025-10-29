<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int a, b, c, greatest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    greatest = a;

    if (b > greatest)
        greatest = b;
    if (c > greatest)
        greatest = c;

    printf("The greatest number is %d\n", greatest);

    return 0;
}
=======
#include <stdio.h>

int main() 
{
    int a, b, c, greatest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    greatest = a;

    if (b > greatest)
        greatest = b;
    if (c > greatest)
        greatest = c;

    printf("The greatest number is %d\n", greatest);

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
