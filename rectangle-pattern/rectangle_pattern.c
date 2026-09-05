#include <stdio.h>

int main(void)
{
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 5; column++)
        {
            printf("*\t");
        }
        printf("\n");
    }

    return 0;
}