#include <stdio.h>

int main()
{
  int num = 0;

  printf("********************************\n");
  printf("Eingabe der Zahl: ");
  scanf("%d", &num);
  printf("********************************\n");
  printf("Analyse der Zahl: %d\n", num);

  if (num < 0)
  {
    printf("negativ - ");
  }
  else
  {
    printf("positiv - ");
  }

  if (num % 2 == 0)
  {
    printf("gerade - ");
  }
  else
  {
    printf("ungerade - ");
  }

  if (num > -10 && num < 10)
  {
    printf("1-stellig\n");
  }
  else if (num > -100 && num <= 10 || num >= 10 && num < 100)
  {
    printf("2-stellig\n");
  }
  else if (num > -1000 && num <= 100 || num >= 100 && num < 1000)
  {
    printf("3-stellig\n");
  }
  else if (num > -10000 && num <= 1000 || num >= 1000 && num < 10000)
  {
    printf("4-stellig\n");
  }
  else if (num > -100000 && num <= 10000 || num >= 10000 && num < 100000)
  {
    printf("5-stellig\n");
  }

  printf("********************************");

  return 0;
}