#include <stdio.h>

int main()
{
    int number1 = 0;
    int number2 = 0;
    int temp = 0;
    int counter = 0;
    float average = 0.0f;

    printf("Eingabe von Zahl 1: ");
    scanf("%d", &number1);
    printf("Eingabe von Zahl 2: ");
    scanf("%d", &number2);

    if (number1 > number2)
    {
        temp = number1;
        number1 = number2;
        number2 = temp;
    }

    if (number1 == number2)
    {
        printf("Keine geraden Werte vorhanden!\n");
    }
    else
    {
        for (int i = number1; i <= number2; i++)
        {
            average += i;
            counter++;
        }

        average /= counter;

        printf("Berchneter Durchschnitt: %.2f", average);
    }

    return 0;
}