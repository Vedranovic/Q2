#include <stdio.h>

int main()
{
  int points = 0;

  printf("erreichte Punkte: ");
  scanf("%d", &points);

  if (points >= 45 && points <= 48)
  {
    printf("%d Punkte entsprechen der Note Sehr Gut.", points);
  }
  else if (points >= 39 && points <= 44)
  {
    printf("%d Punkte entsprechen der Note Gut.", points);
  }
  else if (points >= 32 && points <= 38)
  {
    printf("%d Punkte entsprechen der Note Befriedigend.", points);
  }
  else if (points >= 25 && points <= 31)
  {
    printf("%d Punkte entsprechen der Note Genuegend.", points);
  }
  else if (points >= 0 && points <= 24)
  {
    printf("%d Punkte entsprechen der Note Nicht Genuegend.", points);
  }
  else
  {
    printf("Es koennen Punkte nur von 0-48 erreicht werden.");
  }
  
  return 0;
}