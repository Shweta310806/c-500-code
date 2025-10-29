<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    for(i = 1; i <= num; i++) 
    {
        if(num % i == 0) 
        {
            printf("%d ", i);
        }
    }

    return 0;
}
=======
#include <stdio.h>

int main() 
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    for(i = 1; i <= num; i++) 
    {
        if(num % i == 0) 
        {
            printf("%d ", i);
        }
    }

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
