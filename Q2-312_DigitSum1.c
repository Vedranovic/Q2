#include <stdio.h>

int main()
{
  int digitSum = 0;
  int ogNum = 0;
  int counter = 1;

  for (int number = 10; number < 100; number++)
  {
    digitSum = 0;
    ogNum = number;

    while (number != 0)
    {
      digitSum += number % 10;
      number /= 10;
    }

    number = ogNum;

    if (number > digitSum * 6)
    {
      printf("%d ", number);

      if (counter % 10 == 0)
      {
        printf("\n");
      }

      counter++;
    }
  }

  return 0;
}