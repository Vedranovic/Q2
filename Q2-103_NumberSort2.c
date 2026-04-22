#include <stdio.h>

int main()
{

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int temp = 0;

    printf("Zahl 1: ");
    scanf("%d", &num1);
    printf("Zahl 2: ");
    scanf("%d", &num2);
    printf("Zahl 3: ");
    scanf("%d", &num3);

    printf("Eingegebene Zahlenfolge: %d, %d, %d\n", num1, num2, num3);

    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3)
    {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Sortierte Zahlenfolge: %d, %d, %d", num1, num2, num3);

    return 0;
}