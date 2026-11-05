#include "main.h"

/**
 * times_table - prints the multiplication table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int num;
	int x;
	int y;
	int z;

	y = 0;
	z = 0;

	while (y < 10)
	{
		for (x = 0; x < 10; x++)
		{
			z = x * y;
			if (z > 9)
			{
				putchar((z / 10) + '0');
				putchar((z % 10) + '0');
			}
			else
			{
			putchar(z + '0');
			}

		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
		}
		putchar('\n');
		y++;
	}
}
