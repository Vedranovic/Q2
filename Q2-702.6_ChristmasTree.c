#include <stdio.h>

int main()
{
    int anzZeilen = 5;
    int anzSpalten = 5;

    for (int i = 0; i < anzZeilen; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < anzSpalten - i; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}