#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int randNum = 0;
    char answer = 'a';
    int upBound = 100;
    int lowBound = 1;

    do
    {
        randNum = rand() % (upBound - lowBound + 1) + lowBound;

        printf("Ist der Wert %d?\n", randNum);
        fflush(stdin);
        scanf("%c", &answer);

        if (answer == 'h')
        {
            lowBound = randNum;
        }
        else if (answer == 'n')
        {
            upBound = randNum;
        }

    } while (answer != 'j');

    return 0;
}