#include "main.h"

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
	int i;

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size - 1; i++)
		ar[i] = c;

	ar[i] = '\0';
	return (ar);
}
