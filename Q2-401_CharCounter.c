#include <stdio.h>

int main()
{
  char character = 'a';
  int count = 0;

  while (character != '#')
  {
    printf("");
    scanf("%c", &character);

    count++;
  }

  printf("Anzahl der eingegebenen Zeichen: %d", count);
  
  return 0;
}