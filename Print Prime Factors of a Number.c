<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime factors of %d are: ", num);

    for(i = 2; i <= num; i++) 
    {
        while(num % i == 0) 
        {
            printf("%d ", i);
            num = num / i;
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

    printf("Prime factors of %d are: ", num);

    for(i = 2; i <= num; i++) 
    {
        while(num % i == 0) 
        {
            printf("%d ", i);
            num = num / i;
        }
    }

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
