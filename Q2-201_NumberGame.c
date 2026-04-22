#include <stdio.h>

int main()
{
  int num = 0;

  printf("Bitte eine ganze Zahl eingeben: ");
  scanf("%d", &num);

  switch (num % 5)
  {
  case 0:
    num *= 2;
    printf("Neuer Zahlenwert: %d", num);
    break;
  case 1:
    printf("Neuer Zahlenwert: %d", num);
    break;
  case 2:
    num /= 2;
    printf("Neuer Zahlenwert: %d", num);
    break;
  case 3:
    num += 3;
    printf("Neuer Zahlenwert: %d", num);
    break;
  case 4:
    printf("Neuer Zahlenwert: %d", num);
    break;
  }

  return 0;
}