#include "main.h"

/**
 * swap_int - swaps the values of a and b
 * @a: int to b
 * @b: int to a
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int banana;

	banana = *a;

	*a = *b;
	*b = banana;
}
