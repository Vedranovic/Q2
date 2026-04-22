#include <stdio.h>

#define STARCOUNT 20

int main()
{
    for (int i = 0; i < STARCOUNT; i++)
    {
        printf("*");

        if ((i + 1) % 10 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}