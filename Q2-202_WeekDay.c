#include <stdio.h>

int main()
{
  int day = 0;
  int month = 0;
  int year = 0;
  int week = 0;

  printf("Bitte ein Datum eingeben: ");
  scanf("%d.%d.%d", &day, &month, &year);

  int t = day;
  int m = month;
  int h = year / 100;
  int j = year % 100;

  week = (t + ((m + 1) * 26 / 10) + j + j / 4 + h / 4 - 2 * h) % 7;

  if (week < 0)
  {
    week += 7;
  }

  switch (month)
  {
  case 1:
    printf("Der %d. Januar %d", day, year);
    break;
  case 2:
    printf("Der %d. Februar %d", day, year);
    break;
  case 3:
    printf("Der %d. Maerz %d", day, year);
    break;
  case 4:
    printf("Der %d. April %d", day, year);
    break;
  case 5:
    printf("Der %d. Mai %d", day, year);
    break;
  case 6:
    printf("Der %d. Juni %d", day, year);
    break;
  case 7:
    printf("Der %d. Juli %d", day, year);
    break;
  case 8:
    printf("Der %d. August %d", day, year);
    break;
  case 9:
    printf("Der %d. September %d", day, year);
    break;
  case 10:
    printf("Der %d. Oktober %d", day, year);
    break;
  case 11:
    printf("Der %d. November %d", day, year);
    break;
  case 12:
    printf("Der %d. Dezember %d", day, year);
    break;
  }

  switch (week)
  {
  case 1:
    printf(" ist ein Sonntag");
    break;
  case 2:
    printf(" ist ein Montag");
    break;
  case 3:
    printf(" ist ein Dienstag");
    break;
  case 4:
    printf(" ist ein Mittwoch");
    break;
  case 5:
    printf(" ist ein Donnerstag");
    break;
  case 6:
    printf(" ist ein Freitag");
    break;
  case 7:
    printf(" ist ein Samstag");
    break;
  }

  return 0;
}