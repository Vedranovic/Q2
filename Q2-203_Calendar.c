#include <stdio.h>

int main()
{
  int day = 0;
  int month = 0;

  printf("Bitte den Tag eingeben: ");
  scanf("%d", &day);
  printf("Bitte den Monat eingeben: ");
  scanf("%d", &month);

  switch (month)
  {
  case 1:
    printf("Der %d.Januar ist der %d.Tag des Jahres.", day, day);
    break;
  case 2:
    printf("Der %d.Februar ist der %d.Tag des Jahres.", day, day + 31);
    break;
  case 3:
    printf("Der %d.Maerz ist der %d.Tag des Jahres.", day, day + 59);
    break;
  case 4:
    printf("Der %d.April ist der %d.Tag des Jahres.", day, day + 90);
    break;
  case 5:
    printf("Der %d.Mai ist der %d.Tag des Jahres.", day, day + 120);
    break;
  case 6:
    printf("Der %d.Juni ist der %d.Tag des Jahres.", day, day + 151);
    break;
  case 7:
    printf("Der %d.Juli ist der %d.Tag des Jahres.", day, day + 181);
    break;
  case 8:
    printf("Der %d.August ist der %d.Tag des Jahres.", day, day + 212);
    break;
  case 9:
    printf("Der %d.September ist der %d.Tag des Jahres.", day, day + 243);
    break;
  case 10:
    printf("Der %d.Oktober ist der %d.Tag des Jahres.", day, day + 273);
    break;
  case 11:
    printf("Der %d.November ist der %d.Tag des Jahres.", day, day + 304);
    break;
  case 12:
    printf("Der %d.Dezember ist der %d.Tag des Jahres.", day, day + 334);
    break;
  }

  return 0;
}