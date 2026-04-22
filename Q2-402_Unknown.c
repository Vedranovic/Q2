#include <stdio.h>
#include <math.h>

int main()
{
  int num = 0;
  int exponent = 0;

  printf("Enter a number: ");
  scanf("%d", &num);

  while (pow(exponent + 1, 2.0) <= num)
  {
    exponent += 1;
  }
  
  printf("%d, %d", exponent, pow(exponent, 2.0));

  return 0;
}