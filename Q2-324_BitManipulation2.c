#include <stdio.h>

int main()
{
    int num = 0;
    int pos = 0;
    char choice = 'a';

    printf("Gib eine ganze Zahl (positiv/negativ) ein: ");
    scanf("%d", &num);
    printf("Binaerdarstellung: ");

    for (int i = 31; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);

        if (i % 4 == 0)
        {
            printf(" ");
        }
    }

    printf("\n");
    printf("Willst Du ein Bit (S)etzen oder (L)oeschen? ");
    scanf(" %c", &choice);
    printf("Gib die Position ein (31 - 0): ");
    scanf("%d", &pos);

    if (choice == 'S' || choice == 's')
    {
        num |= (1 << pos);
    }
    else if (choice == 'L' || choice == 'l')
    {
        num &= ~(1 << pos);
    }

    printf("Die neue Zahl lautet: %d\n", num);
    printf("Binaerdarstellung: ");

    for (int i = 31; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);

        if (i % 4 == 0)
        {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}