#include <stdio.h>

int main()
{
    int choice = 0;
    int height = 0;
    int width = 0;
    char anotherTree = 'a';

    do
    {
        printf("Menue:\n");
        printf("(1) Hoehe eingeben\n");
        printf("(2) Breite eingeben\n");
        printf("(0) Programm abbrechen\n");
        printf("Eingabe: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Hoehe: ");
            scanf("%d", &height);
            break;
        case 2:
            printf("Breite: ");
            scanf("%d", &width);
        }

        if (choice != 0)
        {
            int stars, spaces;

            for (int i = 0; i < height - 2; i++)
            {
                stars = 2 * i + 1;
                spaces = (width - stars) / 2;

                for (int j = 0; j < spaces; j++)
                {
                    printf(" ");
                }
                for (int j = 0; j < stars; j++)
                {
                    printf("*");
                }
                printf("\n");
            }

            spaces = (width - 1) / 2;

            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < spaces; j++)
                {
                    printf(" ");
                }
                printf("*\n");
            }

            printf("Wollen Sie noch einen Baum zeichnen (j/n)?: ");
            scanf(" %c", &anotherTree);
        }
    } while (anotherTree == 'j' || anotherTree == 'J');

    printf("Auf wiedersehen ...\n");

    return 0;
}