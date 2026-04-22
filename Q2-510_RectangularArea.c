#include <stdio.h>

int main()
{
  float a = 0.0f;
  float b = 0.0f;
  float first_area = 0.0f;
  float area = 0.0f;
  int counter = 1;
  int countA = 0;
  int countB = 0;

  printf("Rechteckflaeche\n");
  printf("---------------\n");
  printf("Seitenlaenge a = ");
  scanf("%f", &a);
  printf("Seitenlaenge b = ");
  scanf("%f", &b);
  
  first_area = a * b;

  printf("Rechteckflaeche zu Beginn: %.2f\n", first_area);

  do
  {
    if (counter % 2 == 1)
    {
      a /= 2;
      countA++;
    }
    if (counter % 2 == 0)
    {
      b /= 2;
      countB++;
    }

    area = a * b;
    counter++;
  } while (area > (first_area / 20));

  printf("Rechteckflaeche nach Halbierungen: %.2f\n", area);
  printf("Seitenlaenge a: %.2f nach %d Halbierungen.\n", a, countA);
  printf("Seitenlaenge b: %.2f nach %d Halbierungen.", b, countB);
  
  return 0;
}