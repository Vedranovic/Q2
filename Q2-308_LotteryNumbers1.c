#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UPBOUND 45
#define LOWBOUND 1

int main()
{
    srand(time(NULL));

    int randNum = 0;

    printf("Lottozahlen 6 aus 45: ");

    for (int i = 0; i < 6; i++)
    {
        randNum = rand() % (UPBOUND - LOWBOUND + 1) + LOWBOUND;

        printf("%d ", randNum);
    }

    return 0;
}