#include "main.h"

/**
 * _isupper - checks if char is uppercase
 * @c: char to check
 *
 * Return: 1 if upper, else 0
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
