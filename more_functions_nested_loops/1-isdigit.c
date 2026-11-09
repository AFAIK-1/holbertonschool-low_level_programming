#include "main.h"

/**
 * _isdigit - checks if char is digit
 * @c: char to check
 *
 * Return: 1 if c is digit, else 0
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
