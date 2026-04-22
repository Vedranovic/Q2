#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));

  int dice = rand() % (6 - 1 + 1) + 1;
  int eyeSum = 0;
  int counter = 0;

  do
  {
    eyeSum += dice;
    dice = rand() % (6 - 1 + 1) + 1;
    counter++;
  } while (eyeSum < 100);

  printf("Mit %d Wuerfen wurde die Augensumme von %d erreicht.", counter, eyeSum);

  return 0;
}