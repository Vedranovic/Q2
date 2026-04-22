#include <stdio.h>

int main()
{
  int num = 0;
  int sum = 0;

  printf("Gib eine ganze Zahl ein: ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++)
  {
    sum += i;
  }
  
  printf("%d", sum);

  return 0;
}