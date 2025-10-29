<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int i, length;

    printf("Enter a string: ");
    gets(str);   

    length = strlen(str);

    printf("Reversed string: ");
    for(i = length - 1; i >= 0; i--) 
    {
        printf("%c", str[i]);
    }

    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int i, length;

    printf("Enter a string: ");
    gets(str);   

    length = strlen(str);

    printf("Reversed string: ");
    for(i = length - 1; i >= 0; i--) 
    {
        printf("%c", str[i]);
    }

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
