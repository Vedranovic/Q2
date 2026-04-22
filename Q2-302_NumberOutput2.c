#include <stdio.h>

int main()
{
  int number1 = 0;
  int number2 = 0;
  int temp = 0;

  printf("Erste Zahl: ");
  scanf("%d", &number1);
  printf("Zweite Zahl: ");
  scanf("%d", &number2);

  if (number1 > number2)
  {
    temp = number1;
    number1 = number2;
    number2 = temp;
  }

  for (int i = number1; i <= number2; i += 2)
  {
    printf(" %d ", i);

    if (i < number2 && i < (number2 - 1))
    {
      printf("/");
    }
  }

  return 0;
}