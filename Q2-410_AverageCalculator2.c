#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UPBOUND 100
#define LOWBOUND -100

int main()
{
    srand(time(NULL));

    int randNum = 0;
    int counter = 0;
    float middle_Value = 0.0f;

    printf("Zahlen erstellen\n");

    while (randNum > -50)
    {
        randNum = rand() % (UPBOUND - LOWBOUND + 1) + LOWBOUND;

        if (randNum > -50)
        {
            printf("Zahl: %d", randNum);
            printf("\n");

            middle_Value += randNum;
            counter++;
        }
    }

    middle_Value /= counter;

    printf("-----------------------\n");
    printf("Mittelwert: %.2f\n", middle_Value);
    printf("Anzahl der Zahl: %d", counter);

    return 0;
}