#include "main.h"

/**
 * print_line - draws a straight line
 * @n: num of char
 *
 * Return: Nothing
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n--)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
