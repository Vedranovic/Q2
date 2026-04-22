#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    srand(time(NULL));

    int num = 0;
    int square_root = 0;

    printf("Bitte eine ganze Zahl eingeben: ");
    scanf("%d", &num);

    if (num > 0)
    {
        square_root = sqrt(num);

        printf("Die Wurzel aus %d betraegt %d.\n", num, square_root);
    }
    else
    {
        printf("Die Wurzel aus einer negativen Zahl ist nicht moeglich.\n");
    }

    float randNum1 = (double)rand() / RAND_MAX * (3.0 - (-3.0)) + (-3.0);
    float randNum2 = (double)rand() / RAND_MAX * (3.0 - (-3.0)) + (-3.0);
    float randNum3 = (double)rand() / RAND_MAX * (3.0 - (-3.0)) + (-3.0);
    float sum = 0.0f;
    float product = 0.0f;

    sum = randNum1 + randNum2 + randNum3;
    product = randNum1 * randNum2 * randNum3;

    if (sum > product)
    {
        printf("Die Summe %.2f ist groesser als das Produkt %.2f.\n", sum, product);
    }
    else
    {
        printf("Das Produkt %.2f ist groesser als die Summe %.2f.\n", product, sum);
    }

    int randNum = rand() % (99 - (-99)) + (-99);

    if (randNum >= -99 && randNum <= -10 || randNum >= 10 && randNum <= 99)
    {
        printf("Die Zufallszahl lautet %d und ist zweistellig!\n", randNum);
    }
    else
    {
        printf("Die Zufallszahl lautet %d und ist einstellig!\n", randNum);
    }

    int number = 0;

    printf("Bitte geben sie eine Zahl ein: ");
    scanf("%d", &number);

    if (number % 2 == 0 && number % 3 == 0)
    {
        printf("Die Zahl %d ist gerade und ein Vielfaches von 3\n", number);
    }
    else if (number % 2 != 0)
    {
        printf("Die Zahl %d ist keine gerade Zahl!\n", number);
    }
    else if (number % 3 != 0)
    {
        printf("Die Zahl %d ist kein Vielfaches von 3!\n", number);
    }

    char letter = 'a';

    printf("Bitte geben sie ein Zeichen ein: ");
    fflush(stdin);
    scanf("%c", &letter);

    if (letter >= 'A' && letter <= 'Z')
    {
        printf("Das Zeichen '%c' ist ein Grossbuchstabe.\n", letter);
    }
    else if (letter >= 'a' && letter <= 'z')
    {
        printf("Das Zeichen '%c' ist ein Kleinbuchstabe.\n", letter);
    }
    else
    {
        printf("Das Zeichen '%c' ist kein Buchstabe!\n", letter);
    }
    if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
    {
        printf("Der Grossbuchstabe '%c' ist ein Vokal.\n", letter);
    }
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    {
        printf("Der Kleinbuchstabe '%c' ist ein Vokal.\n", letter);
    }

    int year = 0;

    printf("Geben sie ein 4-stelligen Jahr ein: ");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 400 == 0)
    {
        printf("Das Jahr %d ist ein Schaltjahr.", year);
    }
    else
    {
        printf("Das Jahr %d ist kein Schaltjahr.\n", year);
    }

    return 0;
}