#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int ggT = 0;

    printf("Erste Zahl eingeben: ");
    scanf("%d", &a);
    printf("Zweite Zahl eingeben: ");
    scanf("%d", &b);

    int originalA = a;
    int originalB = b;

    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }

    if (b == 0)
    {
        ggT = a;
        printf("%d", ggT);
    }
    else
    {
        ggT = b;
        printf("%d", ggT);
    }

    int kgV = (originalA * originalB) / ggT;

    printf("Der groesste gemeinsame Teiler (ggT) von %d und %d ist: %d\n", originalA, originalB, ggT);
    printf("Das kleinste gemeinsame Vielfache (kgV) von %d und %d ist: %d\n", originalA, originalB, kgV);

    return 0;
}