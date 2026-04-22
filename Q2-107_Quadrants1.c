#include <stdio.h>

int main()
{
  int x = 0;
  int y = 0;

  printf("Eingabe der x-Koordinate des Puktes: ");
  scanf("%d", &x);
  printf("Eingabe der x-Koordinate des Punktes: ");
  scanf("%d", &y);

  if (x > 0 && y > 0)
  {
    printf("Der Punkt (%d/%d) liegt im 1. Quadranten.", x, y);
  }
  else if (x < 0 && y > 0)
  {
    printf("Der Punkt (%d/%d) liegt im 2. Quadranten.", x, y);
  }
  else if (x < 0 && y < 0)
  {
    printf("Der Punkt (%d/%d) liegt im 3. Quadranten.", x, y);
  }
  else if (x > 0 && y < 0)
  {
    printf("Der Punkt (%d/%d) liegt im 4. Quadranten.", x, y);
  }
  else
  {
    printf("Der Punkt 0 liegt in keinem Quadrant");
  }

  return 0;
}