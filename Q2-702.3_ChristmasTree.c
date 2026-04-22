#include <stdio.h>

int main()
{
    int rows = 0;
    int stars = 0;

    printf("Eingabe Zeilen: ");
    scanf("%d", &rows);
    printf("Eingabe Sterne: ");
    scanf("%d", &stars);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < stars; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}