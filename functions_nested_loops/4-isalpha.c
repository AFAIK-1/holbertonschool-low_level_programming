#include "main.h"

/**
 * _isalpha - determines if c is alpha or not
 * @c: character to check
 *
 * Return: 1 if alpha, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
