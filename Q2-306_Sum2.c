#include <stdio.h>

int main()
{
  int num = 0;
  int counter = 1;
  int sum = 0;

  for (int i = 0; i < 5; i++)
  {
    printf("Eingabe von Zahl %d: ", counter);
    scanf("%d", &num);

    sum += num;
    counter++;
  }
  
  printf("Summe: %d", sum);

  return 0;
}