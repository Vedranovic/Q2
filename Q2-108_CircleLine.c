#include <stdio.h>
#include <math.h>

int main()
{
  double x_punkt = 0.0;
  double y_punkt = 0.0;
  double x_mittelpunkt = 0.0;
  double y_mittelpunkt = 0.0;
  double radius = 0.0;
  double abstand = 0.0;

  printf("Eingabe der x-Koordinate des Punktes: ");
  scanf("%lf", &x_punkt);

  printf("Eingabe der y-Koordinate des Punktes: ");
  scanf("%lf", &y_punkt);

  printf("Eingabe der x-Koordinate des Mittelpunktes: ");
  scanf("%lf", &x_mittelpunkt);

  printf("Eingabe der y-Koordinate des Mittelpunktes: ");
  scanf("%lf", &y_mittelpunkt);

  printf("Eingabe der Radiuslaenge: ");
  scanf("%lf", &radius);

  abstand = sqrt(pow(x_punkt - x_mittelpunkt, 2) + pow(y_punkt - y_mittelpunkt, 2));

  if (abstand < radius)
  {
    printf("Der Punkt (%.0lf/%.0lf) liegt innerhalb der Kreislinie.\n", x_punkt, y_punkt);
  }
  else
  {
    printf("Der Punkt (%.0lf/%.0lf) liegt ausserhalb der Kreislinie.\n", x_punkt, y_punkt);
  }

  return 0;
}