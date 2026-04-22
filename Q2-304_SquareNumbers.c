#include <stdio.h>
#include <math.h>

int main()
{
  int num = 0;
  int squareNum = 0;

  printf("Gib eine ganze Zahl ein: ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++)
  {
    squareNum = pow(i, 2.0);

    printf("%d - %4d\n", i, squareNum);
  }
  
  return 0;
}