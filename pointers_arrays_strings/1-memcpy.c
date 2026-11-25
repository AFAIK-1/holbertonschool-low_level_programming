#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - copies array src to array dest
 * @dest: destination array
 * @src: src array
 * @n: number of bytes to copy
 *
 * Return: char dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
