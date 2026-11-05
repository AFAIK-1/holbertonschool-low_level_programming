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
		return (n * -1);
	}
	return (n);
}
