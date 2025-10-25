#include <stdio.h>

int main() 
{
    int angle1, angle2, angle3, sum;

    printf("Enter three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    sum = angle1 + angle2 + angle3;

    if (sum != 180 || angle1 <= 0 || angle2 <= 0 || angle3 <= 0) 
    {
        printf("The triangle is not valid.\n");
    } 
    else {
        
        if (angle1 == 60 && angle2 == 60 && angle3 == 60)
            printf("The triangle is Equilateral.\n");
        
        else if (angle1 == 90 || angle2 == 90 || angle3 == 90)
            printf("The triangle is Right-angled.\n");
        
        else if (angle1 < 90 && angle2 < 90 && angle3 < 90)
            printf("The triangle is Acute-angled.\n");
        
        else
            printf("The triangle is Obtuse-angled.\n");
    }

    return 0;
}
