#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));

  int counter10 = 0;
  int counter = 0;
  int dice = rand() % (6 - 1 + 1) + 1;

  do
  {
    if (dice == 6)
    {
      counter10++;
    }

    dice = rand() % (6 - 1 + 1) + 1;
    counter++;
  } while (counter10 != 10);

  printf("Fuer 10 Sechser musste %d-mal gewuerfelt werden.", counter);

  return 0;
}