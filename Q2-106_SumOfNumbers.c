#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));

  int randNum1 = rand() % (60 - (-60) + 1) + (-60);
  int randNum2 = rand() % (60 - (-60) + 1) + (-60);
  int randNum3 = rand() % (60 - (-60) + 1) + (-60);
  int randNum4 = rand() % (60 - (-60) + 1) + (-60);
  int randNum5 = rand() % (60 - (-60) + 1) + (-60);
  int sumPos = 0;
  int sumNeg = 0;

  printf("Zahlensumme:\n");
  printf("-------------------------------------------\n");
  printf("Zuffalszahlen: %d/%d/%d/%d/%d\n", randNum1, randNum2, randNum3, randNum4, randNum5);

  if (randNum1 >= 0)
  {
    sumPos += randNum1;
  }
  else if (randNum1 < 0)
  {
    sumNeg += randNum1;
  }
  if (randNum2 >= 0)
  {
    sumPos += randNum2;
  }
  else if (randNum2 < 0)
  {
    sumNeg += randNum2;
  }
  if (randNum3 >= 0)
  {
    sumPos += randNum3;
  }
  else if (randNum3 < 0)
  {
    sumNeg += randNum3;
  }
  if (randNum4 >= 0)
  {
    sumPos += randNum4;
  }
  else if (randNum4 < 0)
  {
    sumNeg += randNum4;
  }
  if (randNum5 >= 0)
  {
    sumPos += randNum5;
  }
  else if (randNum5 < 0)
  {
    sumNeg += randNum5;
  }

  printf("Summe der positiven Zahlen: %d\n", sumPos);
  printf("Summe der negativen Zahlen: %d\n", sumNeg);
  printf("-------------------------------------------\n");

  return 0;
}