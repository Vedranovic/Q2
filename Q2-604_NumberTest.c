#include <stdio.h>

int main()
{
    int index = 100;
    int digit1 = 0;
    int digit2 = 0;
    int digit3 = 0;

    while (index < 1000)
    {
        digit1 = index / 100;
        digit2 = (index / 10) % 10;
        digit3 = index % 10;

        if (digit1 != 0 && digit2 != 0 && digit3 != 0 && index % digit1 == 0 && index % digit2 == 0 && index % digit3 == 0)
        {
            printf("Zahl gefunden: %d\n", index);
        }

        index++;
    }

    return 0;
}