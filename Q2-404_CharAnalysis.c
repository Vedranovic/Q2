#include <stdio.h>

#define MAX_TEXT_LENGTH 1000

int main()
{
  char sentence[MAX_TEXT_LENGTH] = {'a'};
  int index = 0;
  int bigNum = 0;
  int lowNum = 0;
  int consonant = 0;
  int  vocal = 0;
  int num = 0;
  int letter = 0;
  int space = 0;

  gets(sentence);

  while (sentence[index] != '.')
  {
    if (sentence[index] >= 'A' && sentence[index] <= 'Z')
    {
      bigNum++;
    }
    if (sentence[index] >= 'a' && sentence[index] <= 'z')
    {
      lowNum++;
    }

    switch (sentence[index])
    {
    case 'a':
      vocal++;
      break;
    case 'e':
      vocal++;
      break;
    case 'i':
      vocal++;
      break;
    case 'o':
      vocal++;
      break;
    case 'u':
      vocal++;
      break;
    case 'A':
      vocal++;
      break;
    case 'E':
      vocal++;
      break;
    case 'I':
      vocal++;
      break;
    case 'O':
      vocal++;
      break;
    case 'U':
      vocal++;
      break;
    default:
      if (sentence[index] >= 'a' && sentence[index] <= 'z' || sentence[index] >= 'A' && sentence[index] <= 'Z')
      {
        consonant++;
      }
      break;
    }

    if (sentence[index] >= '0' && sentence[index] <= '9')
    {
      num++;
    }
    if (sentence[index] >= '!' && sentence[index] <= '/' || sentence[index] >= ':' && sentence[index] <= '?' || sentence[index] >= '[' && sentence[index] <= '_' || sentence[index] >= '{' && sentence[index] <= '~')
    {
      letter++;
    }
    if (sentence[index] == ' ')
    {
      space++;
    }

    index++;
  }

  printf("Grossbuchstaben: %d\n", bigNum);
  printf("Kleinbuchstaben: %d\n", lowNum);
  printf("Konsonanten: %d\n", consonant);
  printf("Vokale: %d\n", vocal);
  printf("Ziffern: %d\n", num);
  printf("Satzzeichen: %d\n", letter);
  printf("Leerzeichen: %d\n", space);

  return 0;
}