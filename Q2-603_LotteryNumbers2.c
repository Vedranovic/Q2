#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UB 45
#define LB 1

int main()
{
    srand(time(NULL));

    int randNum1 = rand() % (UB - LB + 1) + LB;
    int randNum2 = rand() % (UB - LB + 1) + LB;
    int randNum3 = rand() % (UB - LB + 1) + LB;
    int randNum4 = rand() % (UB - LB + 1) + LB;
    int randNum5 = rand() % (UB - LB + 1) + LB;
    int randNum6= rand() % (UB - LB + 1) + LB;
    int temp = 0;

    for (int i = 0; i < 5; i++) 
    {
        if (randNum1 > randNum2) { temp = randNum1; randNum1 = randNum2; randNum2 = temp; }
        if (randNum2 > randNum3) { temp = randNum2; randNum2 = randNum3; randNum3 = temp; }
        if (randNum3 > randNum4) { temp = randNum3; randNum3 = randNum4; randNum4 = temp; }
        if (randNum4 > randNum5) { temp = randNum4; randNum4 = randNum5; randNum5 = temp; }
        if (randNum5 > randNum6) { temp = randNum5; randNum5 = randNum6; randNum6 = temp; }
    }

    printf("%d %d %d %d %d %d", randNum1, randNum2, randNum3, randNum4, randNum5, randNum6);

    return 0;
}