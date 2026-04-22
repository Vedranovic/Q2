#include <stdio.h>

int main()
{
  int num = 0;

  printf("Bitte eine Zahl eingeben: ");
  scanf("%d", &num);

  if (num > -10 && num < 10)
  {
    printf("Die Zahl %d hat 1 Stelle", num);
  }
  else if (num > -100 && num <= 10 || num >= 10 && num < 100)
  {
    printf("Die Zahl %d hat 2 Stellen", num);
  }
  else if (num > -1000 && num <= 100 || num >= 100 && num < 1000)
  {
    printf("Die Zahl %d hat 3 Stellen", num);
  }
  else if (num > -10000 && num <= 1000 || num >= 1000 && num < 10000)
  {
    printf("Die Zahl %d hat 4 Stellen", num);
  }
  else if (num > -100000 && num <= 10000 || num >= 10000 && num < 100000)
  {
    printf("Die Zahl %d hat 5 Stellen", num);
  }
  else if (num > -1000000 && num <= 100000 || num >= 100000 && num < 1000000)
  {
    printf("Die Zahl %d hat 6 Stellen", num);
  }
  else
  {
    printf("Die Zahl hat zu viele Stellen!", num);
  }

  return 0;
}