#include <stdio.h>

int main()
{
  int num = 0;
  int digit = 0;
  int digitSum = 0;

  printf("Bitte eine ganze Zahl eingeben: ");
  scanf("%d", &num);

  while (num > 0)
  {
    digit = num % 10;
    num /= 10;
    digitSum += digit;
  }

  printf("Ziffernsumme: %d", digitSum);

  return 0;
}