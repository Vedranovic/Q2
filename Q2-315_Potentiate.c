#include <stdio.h>

int main()
{
  int x = 0;
  int y = 0;
  int ogX = 0;

  printf("Bitte geben Sie eine Basis x ein: ");
  scanf("%d", &x);
  printf("Bitte geben Sie einen Exponeneten y ein: ");
  scanf("%d", &y);

  ogX = x;

  for (int i = 0; i < y-1; i++)
  {
    if (y > 0)
    {
      x *= ogX;
    }
    else if (y < 0)
    {
      x = 1 / ogX;
    }
    else if (y == 0)
    {
      x = 1;
    }
  }
  
  printf("Das Ergebnis: %d", x);

  return 0;
}