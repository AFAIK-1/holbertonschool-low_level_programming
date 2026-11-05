#include "main.h"

/**
 * print_last_digit - prints the last digit (abs val)
 * @n: int to check
 *
 * Return: n as the last digit
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = n * (-1);
	}
	_putchar('0' + n);
	return (n);
}
