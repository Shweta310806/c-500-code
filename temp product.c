#include <stdio.h>

void main()
{
    float A,B,mul;
    printf("Enter senesor A temp :\n");
    scanf("%f",&A);

    printf("Enter senesor B temp :\n");
    scanf("%f",&B);

    mul=A*B;
    printf("Total temperature of the sensors is: %2f", mul);
    
}