#include "main.h"

/**
 * print_rev - prints a string in rev
 * @s: array of chars to print
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i;
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;

	for (i = len; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
