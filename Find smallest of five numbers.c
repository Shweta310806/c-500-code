<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int a, b, c, d, e, smallest;

    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    smallest = a;

    if (b < smallest)
        smallest = b;
    if (c < smallest)
        smallest = c;
    if (d < smallest)
        smallest = d;
    if (e < smallest)
        smallest = e;

    printf("The smallest number is %d\n", smallest);

    return 0;
}
=======
#include <stdio.h>

int main() 
{
    int a, b, c, d, e, smallest;

    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    smallest = a;

    if (b < smallest)
        smallest = b;
    if (c < smallest)
        smallest = c;
    if (d < smallest)
        smallest = d;
    if (e < smallest)
        smallest = e;

    printf("The smallest number is %d\n", smallest);

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
