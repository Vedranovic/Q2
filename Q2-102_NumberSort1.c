#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int temp = 0;

    printf("Zahl 1: ");
    scanf("%d", &num1);
    printf("Zahl 2: ");
    scanf("%d", &num2);

    printf("Eingegeben Zahlenfolge: %d, %d\n", num1, num2);

    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Sortierte Zahlenfolge: %d, %d", num1, num2);

    return 0;
}