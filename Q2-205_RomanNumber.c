#include <stdio.h>

int main()
{
  char first_romanNum = 'a';
  char second_romanNum = 'a';
  char third_romanNum = 'a';
  int decimalNum = 0;

  printf("Bitte eine roemische Zahl eingeben: ");
  fflush(stdin);
  scanf("%c%c%c", &first_romanNum, &second_romanNum, &third_romanNum);

  switch (first_romanNum)
  {
  case 'I':
    decimalNum += 1;
    break;
  case 'V':
    decimalNum += 5;
    break;
  case 'X':
    decimalNum += 10;
    break;
  case 'L':
    decimalNum += 50;
    break;
  case 'C':
    decimalNum += 100;
    break;
  case 'D':
    decimalNum += 500;
    break;
  case 'M':
    decimalNum += 1000;
    break;
  }

  switch (second_romanNum)
  {
  case 'I':
    decimalNum += 1;
    break;
  case 'V':
    decimalNum += 5;
    break;
  case 'X':
    decimalNum += 10;
    break;
  case 'L':
    decimalNum += 50;
    break;
  case 'C':
    decimalNum += 100;
    break;
  case 'D':
    decimalNum += 500;
    break;
  case 'M':
    decimalNum += 1000;
    break;
  }

  switch (third_romanNum)
  {
  case 'I':
    decimalNum += 1;
    break;
  case 'V':
    decimalNum += 5;
    break;
  case 'X':
    decimalNum += 10;
    break;
  case 'L':
    decimalNum += 50;
    break;
  case 'C':
    decimalNum += 100;
    break;
  case 'D':
    decimalNum += 500;
    break;
  case 'M':
    decimalNum += 1000;
    break;
  }

  printf("Die roemische Zahl %c%c%c hat im Dezimalsystem den Wert %d.", first_romanNum, second_romanNum, third_romanNum, decimalNum);

  return 0;
}