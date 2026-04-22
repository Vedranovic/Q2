#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UPBOUND 6
#define LOWBOUND 1

int main()
{
    srand(time(NULL));

    int countDice, randDice, ones = 0;
    int twos = 0;
    int threes = 0;
    int fours = 0;
    int fives = 0;
    int sixs = 0;

    printf("Anzahl der Wuerfe: ");
    scanf("%d", &countDice);

    for (int i = 0; i < countDice; i++)
    {
        randDice = rand() % (UPBOUND - LOWBOUND + 1) + LOWBOUND;

        if (randDice == 1)
        {
            ones++;
        }
        else if (randDice == 2)
        {
            twos++;
        }
        else if (randDice == 3)
        {
            threes++;
        }
        else if (randDice == 4)
        {
            fours++;
        }
        else if (randDice == 5)
        {
            fives++;
        }
        else if (randDice == 6)
        {
            sixs++;
        }
    }

    printf("Augenanzahl 1: %d\n", ones);
    printf("Augenanzahl 2: %d\n", twos);
    printf("Augenanzahl 3: %d\n", threes);
    printf("Augenanzahl 4: %d\n", fours);
    printf("Augenanzahl 5: %d\n", fives);
    printf("Augenanzahl 6: %d", sixs);

    return 0;
}