#include <stdio.h>

int main()
{
    int limit = 0;

    printf("Gib eine Obergrenze fuer die Suche nach pythagoraeischen Tripel ein: ");
    scanf("%d", &limit);
    printf("Die pythagoraeischen Tripel lauten:\n");

    for (int x = 1; x <= limit; x++)
    {
        for (int y = x + 1; y <= limit; y++)
        {
            for (int z = y + 1; z <= limit; z++)
            {
                if (x * x + y * y == z * z)
                {
                    printf("(%d, %d, %d)\n", x, y, z);
                }
            }
        }
    }

    return 0;
}