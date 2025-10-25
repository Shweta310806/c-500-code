#include <stdio.h>

int main() 
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 18)
        printf("Person is a child.\n");
    else
        printf("Person is an adult.\n");

    return 0;
}
