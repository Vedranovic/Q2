#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UPBOUND 100
#define LOWBOUND -100

int main()
{
    srand(time(NULL));

    int x = 0;
    int y = 0;
    int firstQ = 0;
    int secondQ = 0;
    int thirdQ = 0;
    int fourthQ = 0;
    int onXorY = 0;

    printf("Quadrantensuche II\n");

    while (x > -80 && y < 80)
    {
        x = rand() % (UPBOUND - LOWBOUND + 1) + LOWBOUND;
        y = rand() % (UPBOUND - LOWBOUND + 1) + LOWBOUND;

        printf("Koordinaten: (%d, %d)\n", x, y);

        if (x > 0 && y > 0)
        {
            firstQ++;
        }
        if (x < 0 && y > 0)
        {
            secondQ++;
        }
        if (x < 0 && y < 0)
        {
            thirdQ++;
        }
        if (x > 0 && y < 0)
        {
            fourthQ++;
        }
        if (x == 0 || y == 0)
        {
            onXorY++;
        }
    }

    printf("Anzahl der Punkte im 1. Quadraten: %d\n", firstQ);
    printf("Anzahl der Punkte im 2. Quadraten: %d\n", secondQ);
    printf("Anzahl der Punkte im 3. Quadraten: %d\n", thirdQ);
    printf("Anzahl der Punkte im 4. Quadraten: %d\n", fourthQ);
    printf("Anzahl der Punkte auf x- oder y-Achse: %d", onXorY);

    return 0;
}