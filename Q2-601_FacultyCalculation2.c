#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int faculty = 0;

    do
    {
        printf("a: ");
        scanf("%d", &a);
        printf("b: ");
        scanf("%d", &b);
    } while (a < 1 || a > 12 || b < 1 || b > 12);
    
    printf("Berechnung der Fakultaeten eines Intervalls [a,b]\n");
    printf("-------------------------------------------------\n");

    for (int i = a; i <= b; i++)
    {
        faculty = 1;

        for (int j = 1; j <= i; j++)
        {
            faculty *= j;
        }
        
        printf("%d! = %d\n", i, faculty);
    }
    
    return 0;
}