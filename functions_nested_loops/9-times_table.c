#include "main.h"

/**
 * times_table - prints the multiplication table
 *
 * Return: Nothing
 */
void times_table(void)
{
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
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			else
			{
			_putchar(z + '0');
			_putchar(' ');
			}

		if (x != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		}
		_putchar('\n');
		y++;
	}
}
