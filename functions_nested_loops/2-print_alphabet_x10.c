#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char *c;
	int i;
	int x;

	c = "abcdefghijklmnopqrstuvwxyz";
	i = 0;
	x = 0;

	while (x < 10)
	{
		while (c[i] != '\0')
		{
			_putchar(c[i]);
			i++;
		}
		_putchar('\n');
		i = 0;
		x++;
	}
}
