#include <stdio.h>
#include <math.h>

int main()
{
  int num = 0;
  int is_prime = 1;
  
  printf("Gib eine Zahl ein: ");
  scanf("%d", &num);

  if (num <= 1)
  {
    printf("Die Zahl %d ist keine Primzahl.\n", num);
  }
  else
  {
    for (int i = 2; i <= sqrt(num); i++)
    {
      if (num % i == 0)
      {
        is_prime = 0;
        break;
      }
    }

    if (is_prime)
    {
      printf("Die Zahl %d ist eine Primzahl.\n", num);
    }
    else
    {
      printf("Die Zahl %d ist keine Primzahl.\n", num);
    }
  }

  return 0;
}