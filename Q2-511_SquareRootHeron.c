#include <stdio.h>

int main()
{
    double a = 0.0;
    double x0 = 0.0;
    double x1 = 0.0;

    printf("Geben Sie eine Zahl ein: ");
    scanf("%lf", &a);

    x0 = a;

    int continueLoop;
    do
    {
        x1 = 0.5 * (x0 + a / x0);

        if (x1 > x0)
        {
            continueLoop = (x1 - x0 >= 0.000001) ? 1 : 0;
        }
        else
        {
            continueLoop = (x0 - x1 >= 0.000001) ? 1 : 0;
        }

        x0 = x1;
    } while (continueLoop);

    printf("Die Quadratwurzel von %.2lf ist ungefähr %.6lf\n", a, x1);

    return 0;
}