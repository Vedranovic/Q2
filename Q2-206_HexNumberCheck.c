#include <stdio.h>

int main()
{
  char first_hexNum = 'a';
  char second_hexNum = 'a';
  int decimalFirstPlace = 0;
  int decimalSecondPlace = 0;
  int decimalNum = 0;

  printf("Bitte eine zweistelige Hexadezimalzahl eingeben: ");
  scanf("%c%c", &first_hexNum, &second_hexNum);

  if ((first_hexNum > 'F' && second_hexNum > 'F') && (first_hexNum > 'f' && second_hexNum > 'f'))
  {
    printf("Der eingegeben Wert %c%c ist keine Hexadezimalzahl.", first_hexNum, second_hexNum);
  }
  else
  {
    switch (first_hexNum)
    {
    case '1':
      decimalFirstPlace += 1;
      break;
    case '2':
      decimalFirstPlace += 2;
      break;
    case '3':
      decimalFirstPlace += 3;
      break;
    case '4':
      decimalFirstPlace += 4;
      break;
    case '5':
      decimalFirstPlace += 5;
      break;
    case '6':
      decimalFirstPlace += 6;
      break;
    case '7':
      decimalFirstPlace += 7;
      break;
    case '8':
      decimalFirstPlace += 8;
      break;
    case '9':
      decimalFirstPlace += 9;
      break;
    case 'A':
      decimalFirstPlace += 10;
      break;
    case 'B':
      decimalFirstPlace += 11;
      break;
    case 'C':
      decimalFirstPlace += 12;
      break;
    case 'D':
      decimalFirstPlace += 13;
      break;
    case 'E':
      decimalFirstPlace += 14;
      break;
    case 'F':
      decimalFirstPlace += 15;
      break;
    case 'a':
      decimalFirstPlace += 10;
      break;
    case 'b':
      decimalFirstPlace += 11;
      break;
    case 'c':
      decimalFirstPlace += 12;
      break;
    case 'd':
      decimalFirstPlace += 13;
      break;
    case 'e':
      decimalFirstPlace += 14;
      break;
    case 'f':
      decimalFirstPlace += 15;
      break;
    }

    switch (second_hexNum)
    {
    case '1':
      decimalSecondPlace += 1;
      break;
    case '2':
      decimalSecondPlace += 2;
      break;
    case '3':
      decimalSecondPlace += 3;
      break;
    case '4':
      decimalSecondPlace += 4;
      break;
    case '5':
      decimalSecondPlace += 5;
      break;
    case '6':
      decimalSecondPlace += 6;
      break;
    case '7':
      decimalSecondPlace += 7;
      break;
    case '8':
      decimalSecondPlace += 8;
      break;
    case '9':
      decimalSecondPlace += 9;
      break;
    case 'A':
      decimalSecondPlace += 10;
      break;
    case 'B':
      decimalSecondPlace += 11;
      break;
    case 'C':
      decimalSecondPlace += 12;
      break;
    case 'D':
      decimalSecondPlace += 13;
      break;
    case 'E':
      decimalSecondPlace += 14;
      break;
    case 'F':
      decimalSecondPlace += 15;
      break;
    case 'a':
      decimalSecondPlace += 10;
      break;
    case 'b':
      decimalSecondPlace += 11;
      break;
    case 'c':
      decimalSecondPlace += 12;
      break;
    case 'd':
      decimalSecondPlace += 13;
      break;
    case 'e':
      decimalSecondPlace += 14;
      break;
    case 'f':
      decimalSecondPlace += 15;
      break;
    }

    decimalFirstPlace *= 16;
    decimalNum = decimalFirstPlace + decimalSecondPlace;

    printf("Hexadezimalwert: %c%c --> Dezimalwert: %d", first_hexNum, second_hexNum, decimalNum);
  }

  return 0;
}