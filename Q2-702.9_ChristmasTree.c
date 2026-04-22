#include <stdio.h>

int main()
{
    int spaces = 6;
    int stars = 1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        for (int i = 0; i < stars; i++)
        {
            printf("*");
        }

        stars += 2;
        spaces--;

        printf("\n");
    }

    spaces = 6;
    stars = 1;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        for (int i = 0; i < stars; i++)
        {
            printf("*");
        }

        stars += 2;
        spaces--;

        printf("\n");
    }

    spaces = 6;
    stars = 1;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        for (int i = 0; i < stars; i++)
        {
            printf("*");
        }

        stars += 2;
        spaces--;

        printf("\n");
    }

    spaces = 6;
    stars = 1;

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        for (int i = 0; i < stars; i++)
        {
            printf("*");
        }

        stars += 2;
        spaces--;

        printf("\n");
    }

    spaces = 6;
    stars = 2;

    for (int i = 0; i < stars; i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        printf("*");
        printf("\n");
    }

    return 0;
}