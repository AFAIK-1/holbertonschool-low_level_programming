#include "main.h"

/**
 * _islower - determines if c is lowercase or not
 *
 * Return: 1 if lower, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
