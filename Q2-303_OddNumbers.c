#include <stdio.h>

int main()
{
  int start_value = 0;
  int end_value = 0;
  int temp = 0;

  printf("Startwert: ");
  scanf("%d", &start_value);
  printf("Endwert: ");
  scanf("%d", &end_value);

  if (start_value > end_value)
  {
    temp = start_value;
    start_value = end_value;
    end_value = temp;
  }

  for (int i = start_value; i <= end_value; i++)
  {
    if (i % 2 == 1)
    {
      printf(" %d", i);

      if (i < (end_value - 1))
      {
        printf(",");
      }
    }
  }

  return 0;
}