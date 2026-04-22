#include <stdio.h>

int main()
{
  int num1 = 0;
  int num2 = 0;
  int result = 0;
  char operator = 'a';

  printf("1. Zahl eingeben: ");
  scanf("%d", &num1);
  printf("Rechenopeator eingeben (+, -, *, /): ");
  fflush(stdin);
  scanf("%c", &operator);
  printf("2. Zahl eingeben: ");
  scanf("%d", &num2);

  if (operator == '+')
  {
    result = num1 + num2;
    printf("%d %c %d = %d", num1, operator, num2, result);
  }
  else if (operator == '-')
  {
    result = num1 - num2;
    printf("%d %c %d = %d", num1, operator, num2, result);
  }
  else if (operator == '*')
  {
    result = num1 * num2;
    printf("%d %c %d = %d", num1, operator, num2, result);
  }
  else if (operator == '/' && num1 != 0 && num2 != 0)
  {
    result = num1 / num2;
    printf("%d %c %d = %d", num1, operator, num2, result);
  }
  else if (operator == '/' && num1 == 0 || num2 == 0)
  {
    printf("Rechnung: Division durch Null nicht erlaubt!");
  }

  return 0;
}