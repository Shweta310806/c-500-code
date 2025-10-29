<<<<<<< HEAD
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Upper half of diamond
    for(i = 1; i <= n; i++) {

        for(j = 1; j <= n - i; j++)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("%d ", j);

        for(j = i - 1; j >= 1; j--)
            printf("%d ", j);

        printf("\n");
    }

    // Lower half of diamond
    for(i = n - 1; i >= 1; i--) {

        for(j = 1; j <= n - i; j++)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("%d ", j);

        for(j = i - 1; j >= 1; j--)
            printf("%d ", j);

        printf("\n");
    }

    return 0;
}
=======
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Upper half of diamond
    for(i = 1; i <= n; i++) {

        for(j = 1; j <= n - i; j++)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("%d ", j);

        for(j = i - 1; j >= 1; j--)
            printf("%d ", j);

        printf("\n");
    }

    // Lower half of diamond
    for(i = n - 1; i >= 1; i--) {

        for(j = 1; j <= n - i; j++)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("%d ", j);

        for(j = i - 1; j >= 1; j--)
            printf("%d ", j);

        printf("\n");
    }

    return 0;
}
>>>>>>> 7bbc61f7f1bb39293ba48106eceb32ccd57f7690
