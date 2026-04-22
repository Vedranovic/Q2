#include <stdio.h>

int main()
{
  int start_value = 0;
  int counter = 0;
  int result, j = 1;

  printf("Turmrechnung\n");
  printf("------------\n");
  printf("Startzahl: ");
  scanf("%d", &start_value);

  for (int i = 1; i < 20; i++)
  {
    if (i < 10)
    {
      result = start_value * i;

      printf("%9d * %d = %d\n", start_value, i, result);

      start_value = result;
    }

    if (i > 10)
    {
      result = start_value / j;

      printf("%9d / %d = %d\n", start_value, j, result);

      start_value = result;
      j++;
    }
  }

  return 0;
}