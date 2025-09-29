#include <stdio.h>

int main() 
{
  int sum = 0;
  int i;

  for (i = 5; i <= 20; i++)
    {
    sum = sum + i;
  }

  printf("Sum is %d", sum);
  
  return 0;
}
