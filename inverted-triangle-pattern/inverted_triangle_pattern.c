#include <stdio.h>

int main(void)
{
    for (int row = 0; row < 4; row++)
    {
        for (int column = 4; column > row; column--)
        {
            printf("*");
        }
        printf("\n");
    }

    
}