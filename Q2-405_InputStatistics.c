#include <stdio.h>

int main()
{
    char text = 'a';
    int letterCount = 0;
    int wordCount = 0;
    int enterCount = 0;
    int inWord = 0;

    while (scanf("%c", &text) == 1)
    {
        letterCount++;

        if (text == ' ' || text == '\n')
        {
            inWord = 0;
        }
        else
        {
            if (inWord == 0)
            {
                inWord = 1;
                wordCount++;
            }
        }

        if (text == '\n')
        {
            enterCount++;
        }
    }
    
    printf("\nAnzahl der eingegebenen Zeichen: %d\n", letterCount);
    printf("Anzahl der eingegebenen Worte: %d\n", wordCount);
    printf("Anzahl der Zeilen: %d\n", enterCount);

    return 0;
}