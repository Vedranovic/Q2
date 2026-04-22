#include <stdio.h>

int main()
{
    int setBits = 0;
    int not_setBits = 0;
    int num = 8;
    unsigned int mask = 1 << 31;

    printf("Gib eine ganze Zahl (positiv/negativ) ein: ");
    scanf("%d", &num);

    for (int i = 0; i < 32; i++)
    {
        if (num & mask)
        {
            setBits++;
        }
        else
        {
            not_setBits++;
        }

        mask >>= 1;
    }

    printf("Anzahl der gesetzten Bits: %d\n", setBits);
    printf("Anzahl der nicht gesetzten Bits: %d\n", not_setBits);

    return 0;
}