#include <stdio.h>
#include <math.h>

int main()
{
  float capital = 0.0f;
  float share_capital = 0.0f;
  float interest_rate = 0.0f;
  int n = 0;

  printf("Kapitalrechner\n");
  printf("--------------\n");

  printf("Grundkapital: ");
  scanf("%f", &share_capital);
  printf("Zinssatz: ");
  scanf("%f", &interest_rate);

  do
  {
    capital = share_capital * pow((1 + (interest_rate / 100)), n);
    n++;
  } while (capital < share_capital * 2);

  printf("Nach %d Jahren betraegt das Kapital %.2f", n, capital);

  return 0;
}