#include <stdio.h>

int main()
{
  int num = 0;

  printf("Gib eine Zahl ein: ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++)
  {
    printf("%4d", i);

    if (i % 5 == 0)
    {
      printf("\n");
    }
  }
  
  return 0;
}