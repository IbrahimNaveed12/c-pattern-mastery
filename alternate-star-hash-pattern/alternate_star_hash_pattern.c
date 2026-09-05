#include <stdio.h>

int main(void)
{
	for (int row = 0; row < 5; row++)
	{
		if (row % 2 == 0)
		{
			for (int column = 0; column < 5; column++)
			{
				printf("#");
			}
		}
		else
		{
			for (int column = 0; column < 5; column++)
			{
				printf("*");
			}
		}

		printf("\n");
	}

	return 0;
}

