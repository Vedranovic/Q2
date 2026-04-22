#include <stdio.h>
#include <math.h>

#define PI 3.141

int main()
{
    int row_elements = 0;
    float wallis_equation = 0.0f;
    float leibniz_equation = 0.0f;
    float euler_equation = 0.0f;
    int i = 0;
    int j = 1;
    int counter = 1;

    printf("Vergleich von Naeherungsverfahren zur Berechnung der Kreiszahl Pi\n");
    printf("----------------------------------------------------------------\n");
    printf("Addierte Reihenelemente: ");
    scanf("%d", &row_elements);

    for (i = 2; i < row_elements;)
    {
        if (i > j)
        {
            j += 2;
        }
        else if (j > i)
        {
            i += 2;
        }

        wallis_equation *= i / j;
    }

    for (i = 1; i < row_elements; i += 2)
    {

        if (counter % 2 == 0)
        {
            leibniz_equation += j / i;
        }
        if (counter % 2 == 1)
        {
            leibniz_equation -= j / i;
        }
        
        counter++;
    }
    
    for (i = 1; i < row_elements; i++)
    {
        euler_equation += i / pow(j, 2.0);
        j++;
    }
    

    printf("\nVerfahren | Abweichung von M_PI\n");
    printf("   Wallis | %20f\n", wallis_equation);
    printf("  Leibniz | %20f\n", leibniz_equation);
    printf("    Euler | %20f\n", euler_equation);

    return 0;
}