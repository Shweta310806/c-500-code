<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) 
    {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
=======
#include <stdio.h>

int main() 
{
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) 
    {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
