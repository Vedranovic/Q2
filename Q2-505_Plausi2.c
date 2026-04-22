#include <stdio.h>

int main()
{
    int z = 0;

    do
    {
        printf("Gib einen Wert im Intervall [-50,+50] ein: ");
        scanf("%d", &z);
    } while (z < -50 || z > 50);
    
    return 0;
}