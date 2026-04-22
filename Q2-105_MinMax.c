#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int zufallszahlen[6] = {0};
    int minimum = 0;
    int maximum = 0;

    zufallszahlen[0] = rand() % 41 + 10;
    zufallszahlen[1] = rand() % 41 + 10;
    zufallszahlen[2] = rand() % 41 + 10;
    zufallszahlen[3] = rand() % 41 + 10;
    zufallszahlen[4] = rand() % 41 + 10;
    zufallszahlen[5] = rand() % 41 + 10;

    minimum = zufallszahlen[0];
    maximum = zufallszahlen[0];

    if (zufallszahlen[1] < minimum)
    {
        minimum = zufallszahlen[1];
    }
    else if (zufallszahlen[1] > maximum)
    {
        maximum = zufallszahlen[1];
    }
    if (zufallszahlen[2] < minimum)
    {
        minimum = zufallszahlen[2];
    }
    else if (zufallszahlen[2] > maximum)
    {
        maximum = zufallszahlen[2];
    }
    if (zufallszahlen[3] < minimum)
    {
        minimum = zufallszahlen[3];
    }
    else if (zufallszahlen[3] > maximum)
    {
        maximum = zufallszahlen[3];
    }
    if (zufallszahlen[4] < minimum)
    {
        minimum = zufallszahlen[4];
    }
    else if (zufallszahlen[4] > maximum)
    {
        maximum = zufallszahlen[4];
    }
    if (zufallszahlen[5] < minimum)
    {
        minimum = zufallszahlen[5];
    }
    else if (zufallszahlen[5] > maximum)
    {
        maximum = zufallszahlen[5];
    }

    printf("******************************************\n");
    printf("MinMax-Bestimmung:\n");
    printf("******************************************\n");
    printf("Zufallszahlen: %d - %d - %d - %d - %d - %d\n", zufallszahlen[0], zufallszahlen[1], zufallszahlen[2], zufallszahlen[3], zufallszahlen[4], zufallszahlen[5]);
    printf("Groesste Zahl: %d\n", maximum);
    printf("Kleinste Zahl: %d\n", minimum);
    printf("******************************************\n");

    return 0;
}