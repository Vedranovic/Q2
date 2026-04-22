#include <stdio.h>

int main()
{
    float lowCelsius = 0.0f;
    float upCelsius = 0.0f;
    float fahrenheit = 0.0f;
    int jump = 0;

    printf("Bitte geben Sie die Untergrenze ein: ");
    scanf("%f", &lowCelsius);
    printf("Bitte geben Sie die Obergrenze ein: ");
    scanf("%f", &upCelsius);
    printf("Bitte geben Sie die Schrittweite ein: ");
    scanf("%d", &jump);
    printf("Celsius-Fahrenheit-Tabelle:\n");
    printf("-----------------------------------------\n");

    for (float i = lowCelsius; i <= upCelsius; i++)
    {
        fahrenheit = i * 1.8 + 32;

        printf("%+5.1f Grad Celcius sind %+5.1f Grad Fahrenheit\n", i, fahrenheit);

        i += jump-1;
    }
    
    return 0;
}