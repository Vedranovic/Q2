#include <stdio.h>
#include <math.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int temp = 0;
    int sumOfPhytagoras = 0;
    int cToThePowerOf2 = 0;

    printf("======================================\n");
    printf("Dreiecksbestimmung:\n");
    printf("======================================\n");
    printf("Laenge der Seite a: ");
    scanf("%d", &a);
    printf("Laenge der Seite b: ");
    scanf("%d", &b);
    printf("Laenge der Seite c: ");
    scanf("%d", &c);

    sumOfPhytagoras = (pow(a, 2) + pow(b, 2)) - 1;
    cToThePowerOf2 = pow(c, 2);

    if (c < a)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (c < b)
    {
        temp = b;
        b = c;
        c = temp;
    }
    if (a == b == c)
    {
        printf("Art des Dreiecks: gleichseitiges\n");
        printf("======================================");
    }
    else if (a == b || a == c || b == c)
    {
        printf("Art des Dreiecks: gleichschenkeliges\n");
        printf("======================================");
    }
    else if (sumOfPhytagoras == cToThePowerOf2)
    {
        printf("Art des Dreiecks: rechtwinkeliges\n");
        printf("======================================");
    }
    else if (a + b > c)
    {
        printf("Art des Dreiecks: allgemeines\n");
        printf("======================================");
    }
    else
    {
        printf("Das ist kein Dreieck");
    }
    
    return 0;
}