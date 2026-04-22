#include <stdio.h>

int main()
{
  int num = 0;
  int factor = 2;

  printf("Beliebige ganze Zahl: ");
  scanf("%d", &num); // 36

  printf("Primfaktoren: ");

  while (num > 1)
  {
    if (num % factor == 0)
    {
      printf("%d ", factor);
      num /= factor;
      factor = 1;
    }
    factor++;
  }
  
  return 0;
}