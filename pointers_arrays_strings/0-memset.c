#include "main.h"
#include <stdio.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: array to change
 * @b: updated byte
 * @n: number of bytes to replace
 *
 * Return: nothing
 */
void *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
}
