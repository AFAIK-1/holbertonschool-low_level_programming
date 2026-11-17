#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initialises it with another
 * @size: size of array
 * @c: char to assign
 *
 * Return: null if size 0, otherwise a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	char c;
	int n;
	unsigned int i;

	ar = malloc(size * sizeof(char));
	c = "failed to allocate memory";

	if (ar == NULL)
	{
		for (n = 0; c[n] != 0; n++)
			_putchar(c[n]);

		return (NULL);
	}

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
