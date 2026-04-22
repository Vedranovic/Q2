#include <stdio.h>

int main()
{
  double num1 = 0.0;
  double num2 = 0.0;
  double num3 = 0.0;
  double num4 = 0.0;
  double num5 = 0.0;
  double sum = 0.0;
  double middle_value = 0.0;

  printf("Eingabe:\n");
  printf("======================\n");
  printf("Zahl1: ");
  scanf("%lf", &num1);
  printf("Zahl2: ");
  scanf("%lf", &num2);
  printf("Zahl3: ");
  scanf("%lf", &num3);
  printf("Zahl4: ");
  scanf("%lf", &num4);
  printf("Zahl5: ");
  scanf("%lf", &num5);
  printf("======================\n");

  sum = num1 + num2 + num3 + num4 + num5;
  middle_value = (num1 + num2 + num3 + num4 + num5) / 5;

  printf("Summe: %.4lf Mittelwert: %.4lf", sum, middle_value);

  return 0;
}