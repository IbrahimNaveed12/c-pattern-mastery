#include <stdio.h>

int main(void)
{
    for (int row = 0; row < 5; row++)
    {
        for (int column = 1; column < 6; column++)
        {
            printf("%d", column);
        }
        printf("\n");
    }

    return 0;
}