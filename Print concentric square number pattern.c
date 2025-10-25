#include <stdio.h>

int main() 
{
    int n, i, j, min;

    printf("Enter a number: ");
    scanf("%d", &n);

    int size = 2 * n - 1; 

    for(i = 1; i <= size; i++) 
    {
        for(j = 1; j <= size; j++) 
        {

            int top = i - 1;
            int left = j - 1;
            int bottom = size - i;
            int right = size - j;

            min = top;
            if(left < min) min = left;
            if(bottom < min) min = bottom;
            if(right < min) min = right;

            printf("%d ", n - min);
        }
        printf("\n");
    }

    return 0;
}
