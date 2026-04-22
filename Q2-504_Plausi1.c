#include <stdio.h>

int main()
{
    int z = 0;

    do
    {
        printf("Gib einen Wert im Intervall [-10,+10] ein: ");
        scanf("%d", &z);
    } while (z < -10 || z > 10);
    
    return 0;
}