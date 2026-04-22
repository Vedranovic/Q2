#include <stdio.h>
#include <math.h>

int main()
{
    double a = 0.0;
    double xi = 0.0;
    double xi1 = 0.0;
    int k;

    printf("Geben Sie den Radikanden a ein: ");
    scanf("%lf", &a);

    printf("Geben Sie den Wurzelexponenten k ein: ");
    scanf("%d", &k);

    xi = a;

    int continueLoop = 1;
    do
    {
        xi1 = (1.0 / k) * ((k - 1) * xi + a / pow(xi, k - 1));

        if (xi1 > xi)
        {
            continueLoop = (xi1 - xi >= 0.000001) ? 1 : 0;
        }
        else
        {
            continueLoop = (xi - xi1 >= 0.000001) ? 1 : 0;
        }

        xi = xi1;
    } while (continueLoop);

    printf("Die %.2f-te Wurzel aus %.2f ist ungefähr %.6f\n", 1.0 / k, a, xi1);

    return 0;
}