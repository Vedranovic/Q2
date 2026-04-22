#include <stdio.h>

int main()
{
    int num = 0;
    int counter = 1;
    int sum = 0;

    do
    {
        printf("Summenwert: ");
        scanf("%d", &num);
    } while (num < 0);
    
    printf("%d", counter);

    do
    {
        sum += counter;

        if (sum < num)
        {
            counter++;
            printf(" + %d", counter);
        }
        
    } while (sum < num);
    
    printf(" = %d", sum);
    printf("\nAnzhal der Summanden: %d\n", counter);
    printf("Berechnete Summe: %d", sum);

    return 0;
}