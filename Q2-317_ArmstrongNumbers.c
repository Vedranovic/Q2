#include <stdio.h>
#include <math.h>

int main()
{
  int digit = 0;
  int num = 0;
  int ogNum = 0;
  int hundreds = 0;
  int tens = 0;
  int ones = 0;
  int counter = 0;

  printf("Bitte geben Sie eine dreistellige Zahl ein: ");
  scanf("%d", &num);

  ogNum = num;

  for (int i = 0; i < 3; i++)
  {
    digit = num % 10;
    num /= 10;

    if (counter == 0)
    {
      ones = digit;
    }
    if (counter == 1)
    {
      tens = digit;
    }
    if (counter == 2)
    {
      hundreds = digit;
    }

    counter++;
  }

  printf("%d = %d^3 + %d^3 + %d^3", ogNum, hundreds, tens, ones);

  return 0;
}