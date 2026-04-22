#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UPBOUND 10
#define LOWBOUND 1

int main()
{
    srand(time(NULL));

    int randNum = rand() % (UPBOUND - LOWBOUND + 1) + LOWBOUND;
    int guess = 0;
    int counter = 0;

    do
    {
        printf("Errate eine Zahl, die im Bereich 1 bis 10 liegt (3 Versuche): ");
        scanf("%d", &guess);

        if (guess < randNum)
        {
            printf("Die Zahl ist groesser.\n");
        }
        else if (guess > randNum)
        {
            printf("Die Zahl ist kleiner.\n");
        }
        else if (guess == randNum)
        {
            printf("Gratulation. Du hast die Zahl mit %d Versuch(en) erraten.", counter);
            counter = 2;
        }

        counter++;
    } while (counter < 3);

    return 0;
}