#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: int to check
 *
 * Return: n if positive or zero, else return n * -1
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (n * -1);
}
