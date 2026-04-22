#include <stdio.h>

int main()
{
    int n = 0;
    int faculty = 1;
    int counter = 0;

    printf("Bitte eine ganze Zahl eingeben: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        faculty *= i;
        counter++;
    }
    
    printf("%d! = %d", counter, faculty);

    return 0;
}