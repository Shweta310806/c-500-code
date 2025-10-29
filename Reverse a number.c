<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int n = 5678, rev = 0;
    for(; n != 0; n /= 10) 
    {
        rev = rev * 10 + (n % 10);
    }
    printf("Reversed number = %d", rev);

    return 0;
}
=======
#include <stdio.h>

int main() 
{
    int n = 5678, rev = 0;
    for(; n != 0; n /= 10) 
    {
        rev = rev * 10 + (n % 10);
    }
    printf("Reversed number = %d", rev);

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
