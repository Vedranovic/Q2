#include <stdio.h>

int main()
{
  int dezNum = 0;
  int counter = 0;
  char binNum[32] = {'a'};

  printf("Zahl im Dezimalsystem: ");
  scanf("%d", &dezNum);

  while (dezNum != 0)
  {
    binNum[counter] = dezNum % 2;
    dezNum /= 2;
    counter++;
  }
  
  int index = counter - 1;

  printf("Zahl im Binaersystem: ");

  while (index >= 0)
  {
    printf("%d", binNum[index]);
    index--;
  }
  
  return 0;
}