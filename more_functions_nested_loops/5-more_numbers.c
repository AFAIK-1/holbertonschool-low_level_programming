#include "main.h"

/**
 * more_numbers - prints numbers 0-14
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 14; i++)
	{
		if (i < 10)
		{
			_putchar(i + '0');
		}
		else
		{
			putchar((i / 10) + '0');
			putchar ((i % 10) + '0');
		}
	}
	_putchar('\n');
}
