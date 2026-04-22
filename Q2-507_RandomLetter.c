#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    
    char letter = rand() % ('Z' - 'A' + 1) + 'A';

    do
    {
        letter = rand() % ('Z' - 'A' + 1) + 'A';
        printf("%c ", letter);
    } while (letter != 'X' && letter != 'Y' && letter != 'Z');

    return 0;
}