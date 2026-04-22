#include <stdio.h>

int main()
{
  int day = 0;
  int month = 0;

  printf("Bitte den Tag eingeben: ");
  scanf("%d", &day);
  printf("Bitte den Monat einegeben: ");
  scanf("%d", &month);

  switch (month)
  {
  case 1:
    printf("Jahreszeit am %d.%d.: Winter", day, month);
    break;
  case 2:
    printf("Jahreszeit am %d.%d.: Winter", day, month);
    break;
  case 3:
    if (day < 21)
    {
      printf("Jahreszeit am %d.%d.: Winter", day, month);
    }
    else
    {
      printf("Jahreszeit am %d.%d.: Fruehling", day, month);
    }
    break;
  case 4:
    printf("Jahreszeit am %d.%d.: Fruehling", day, month);
    break;
  case 5:
    printf("Jahreszeit am %d.%d.: Fruehling", day, month);
    break;
  case 6:
    if (day < 21)
    {
      printf("Jahreszeit am %d.%d.: Fruehling", day, month);
    }
    else
    {
      printf("Jahreszeit am %d.%d.: Sommer", day, month);
    }
    break;
  case 7:
    printf("Jahreszeit am %d.%d.: Sommer", day, month);
    break;
  case 8:
    printf("Jahreszeit am %d.%d.: Sommer", day, month);
    break;
  case 9:
    if (day < 23)
    {
      printf("Jahreszeit am %d.%d.: Sommer", day, month);
    }
    else
    {
      printf("Jahreszeit am %d.%d.: Herbst", day, month);
    }
    break;
  case 10:
    printf("Jahreszeit am %d.%d.: Herbst", day, month);
    break;
  case 11:
    printf("Jahreszeit am %d.%d.: Herbst", day, month);
    break;
  case 12:
    if (day < 21)
    {
      printf("Jahreszeit am %d.%d.: Herbst", day, month);
    }
    else
    {
      printf("Jahreszeit am %d.%d.: Winter", day, month);
    }
    break;
  }

  return 0;
}