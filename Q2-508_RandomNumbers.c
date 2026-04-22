#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UPBOUND 50
#define LOWBOUND -50

int main()
{
    srand(time(NULL));

    int randNum = 0;
    int negSum = 0;
    int posSum = 0;
    int countPos = 0;
    int countNeg = 0;

    printf("Zuffalszahlen\n");
    printf("-------------\n");

    do
    {
        randNum = rand() % (UPBOUND - LOWBOUND + 1) + LOWBOUND;

        if (randNum <= 0)
        {
            negSum += randNum;
            countNeg++;
        }
        if (randNum >= 0)
        {
            posSum += randNum;
            countPos++;
        }
    } while (negSum <= 15000 && posSum <= 15000);

    printf("Anzahl der positiven Zufallszahlen: %6d\n", countPos);
    printf("Summe der positiven Zufallszahlen: %6d\n", posSum);
    printf("Anzahl der negativen Zufallszahlen: %6d\n", countNeg);
    printf("Summe der negativen Zufallszahlen: %6d", negSum);

    return 0;
}