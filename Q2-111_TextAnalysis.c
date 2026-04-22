#include <stdio.h>

int main()
{
  char text[7] = {0};
  int grossbuchstaben = 0;
  int kleinbuchstaben = 0;
  int ziffern = 0;
  int sonderzeichen = 0;
  int ascii_summe = 0;

  printf("Texteingabe: ");
  scanf("%6s", text);

  if (text[0] >= 'A' && text[0] <= 'Z')
  {
    grossbuchstaben++;
  }
  else if (text[0] >= 'a' && text[0] <= 'z')
  {
    kleinbuchstaben++;
  }
  else if (text[0] >= '0' && text[0] <= '9')
  {
    ziffern++;
  }
  else
  {
    sonderzeichen++;
  }
  ascii_summe += (int)text[0];

  if (text[1] >= 'A' && text[1] <= 'Z')
  {
    grossbuchstaben++;
  }
  else if (text[1] >= 'a' && text[1] <= 'z')
  {
    kleinbuchstaben++;
  }
  else if (text[1] >= '0' && text[1] <= '9')
  {
    ziffern++;
  }
  else
  {
    sonderzeichen++;
  }
  ascii_summe += (int)text[1];

  if (text[2] >= 'A' && text[2] <= 'Z')
  {
    grossbuchstaben++;
  }
  else if (text[2] >= 'a' && text[2] <= 'z')
  {
    kleinbuchstaben++;
  }
  else if (text[2] >= '0' && text[2] <= '9')
  {
    ziffern++;
  }
  else
  {
    sonderzeichen++;
  }
  ascii_summe += (int)text[2];

  if (text[3] >= 'A' && text[3] <= 'Z')
  {
    grossbuchstaben++;
  }
  else if (text[3] >= 'a' && text[3] <= 'z')
  {
    kleinbuchstaben++;
  }
  else if (text[3] >= '0' && text[3] <= '9')
  {
    ziffern++;
  }
  else
  {
    sonderzeichen++;
  }
  ascii_summe += (int)text[3];

  if (text[4] >= 'A' && text[4] <= 'Z')
  {
    grossbuchstaben++;
  }
  else if (text[4] >= 'a' && text[4] <= 'z')
  {
    kleinbuchstaben++;
  }
  else if (text[4] >= '0' && text[4] <= '9')
  {
    ziffern++;
  }
  else
  {
    sonderzeichen++;
  }
  ascii_summe += (int)text[4];

  if (text[5] >= 'A' && text[5] <= 'Z')
  {
    grossbuchstaben++;
  }
  else if (text[5] >= 'a' && text[5] <= 'z')
  {
    kleinbuchstaben++;
  }
  else if (text[5] >= '0' && text[5] <= '9')
  {
    ziffern++;
  }
  else
  {
    sonderzeichen++;
  }
  ascii_summe += (int)text[5];

  printf("Textanalyse:\n");
  printf("Grossbuchstaben: %d\n", grossbuchstaben);
  printf("Kleinbuchstaben: %d\n", kleinbuchstaben);
  printf("Ziffern: %d\n", ziffern);
  printf("Sonderzeichen: %d\n", sonderzeichen);
  printf("ASCII-Summe: %d\n", ascii_summe);

  return 0;
}