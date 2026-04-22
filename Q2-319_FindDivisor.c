#include <stdio.h>

int main()
{
    int num = 0;

    printf("Gib eine ganze Zahl ein: ");
    scanf("%d", &num);

    printf("Die Zahl %d ist durch folgende Zahlen teilbar: ", num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
    
    return 0;
}