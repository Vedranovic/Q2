#include <stdio.h>
#include <math.h>

int main()
{
  int upHoehe = 0;
  int lowHoehe = 0;
  int jump = 0;
  float fallTime = 0.0f;

  printf("Freier Fall\n");
  printf("-----------\n");
  printf("Hoehenobergrenze: ");
  scanf("%d", &upHoehe);
  printf("Hoehenuntergrenze: ");
  scanf("%d", &lowHoehe);
  printf("Schrittweite (in Meter): ");
  scanf("%d", &jump);

  printf("Fallhoehe [m] | Fallzeit [s]\n");
  printf("--------------|-------------\n");

  for (int i = lowHoehe; i <= upHoehe; i++)
  {
    fallTime = sqrt(2 * i / 9.81);

    printf("%13d | %12.2f\n", i, fallTime);

    i += jump - 1;
  }

  return 0;
}