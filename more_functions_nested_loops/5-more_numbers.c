#include "main.h"

/**
 * more_numbers - prints numbers 0-14
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int i;
	int reps;

	for (reps = 0; reps < 5; reps++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar ((i % 10) + '0');
		}
		_putchar('\n');
	}
}
