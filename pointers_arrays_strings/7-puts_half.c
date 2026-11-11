#include "main.h"

/**
 * puts_half - prints the 2nd half of a string
 * @str: char to check
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i;
	int len;
	int n;

	for (len = 0; str[len] != '\0'; len++)
		;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
