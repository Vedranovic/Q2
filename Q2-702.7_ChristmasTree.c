#include <stdio.h>

int main()
{
    int spaces = 4;
    int stars = 1;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < stars; j++)
        {
            printf("*");
        }
        
        printf("\n");
        spaces--;
        stars += 2;
    }

    return 0;
}