<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    float a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
        printf("The triangle is valid.\n");
    else
        printf("The triangle is not valid.\n");

    return 0;
}
=======
#include <stdio.h>

int main() 
{
    float a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
        printf("The triangle is valid.\n");
    else
        printf("The triangle is not valid.\n");

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
