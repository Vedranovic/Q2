#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define UPBOUND 100
#define LOWBOUND -100

int main()
{
    srand(time(NULL));

    int numberOfPoints = 10;
    float longestDistance = 0.0f;
    float shortestDistance = 1000000.0f;
    float totalDistance = 0.0f;

    for (int i = 0; i < numberOfPoints; i++)
    {
        float x = (float)rand() / RAND_MAX * (UPBOUND - LOWBOUND) + LOWBOUND;
        float y = (float)rand() / RAND_MAX * (UPBOUND - LOWBOUND) + LOWBOUND;
        float distance = sqrt(x * x + y * y);

        if (distance > longestDistance)
        {
            longestDistance = distance;
        }

        if (distance < shortestDistance)
        {
            shortestDistance = distance;
        }

        totalDistance += distance;
    }

    float averageDistance = totalDistance / numberOfPoints;

    printf("Laengste Linie: %.2f\n", longestDistance);
    printf("Kuerzeste Linie: %.2f\n", shortestDistance);
    printf("Durchschnittslaenge der Linien: %.2f\n", averageDistance);

    return 0;
}
