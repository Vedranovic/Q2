#include <stdio.h>

int main()
{
    int n = 0;
    int counter1 = 0;
    int counter2 = 1;
    int sumOfCounter = 0;
    int firstOutput = 1;

    printf("Geben Sie eine Zahl ein: ");
    scanf("%d", &n);

    printf("%d, %d, ", counter1, counter2);

    do
    {
        sumOfCounter = counter1 + counter2;

        if (firstOutput)
        {
            printf("%d", sumOfCounter);
            firstOutput = 0;
        }
        else
        {
            printf(", %d", sumOfCounter);
        }

        counter1 = sumOfCounter + counter2;

        if (firstOutput)
        {
            printf("%d", counter1);
            firstOutput = 0;
        }
        else
        {
            printf(", %d", counter1);
        }

        counter2 = sumOfCounter + counter1;

        if (firstOutput)
        {
            printf("%d", counter2);
            firstOutput = 0;
        }
        else
        {
            printf(", %d", counter2);
        }

    } while (sumOfCounter <= n && counter1 <= n && counter2 <= n);

    return 0;
}