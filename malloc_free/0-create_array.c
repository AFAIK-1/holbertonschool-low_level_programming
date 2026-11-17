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

	if (ar == NULL)
	{
		_putchar('f');
		_putchar('a');
		_putchar('i');
		_putchar('l');
		_putchar('e');
		_putchar('d');
		_putchar(' ');
		_putchar('t');
		_putchar('o');
		_putchar(' ');
		_putchar('a');
		_putchar('l');
		_putchar('l');
		_putchar('o');
		_putchar('c');
		_putchar('a');
		_putchar('t');
		_putchar('e');
		_putchar(' ');
		_putchar('m');
		_putchar('e');
		_putchar('m');
		_putchar('o');
		_putchar('r');
		_putchar('y');
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
