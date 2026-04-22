#include <stdio.h>

int main()
{
    int row = 1;

    while (row != 6)
    {
        for (int i = 6; i > row; i--)
        {
            printf("*");
        }
        
        printf("\n");
        row++;
    }
    
    return 0;
}