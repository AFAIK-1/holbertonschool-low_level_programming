#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char *c;
	int i;

	c = "abcdefghijklmnopqrstuvwxyz";
	i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
}
