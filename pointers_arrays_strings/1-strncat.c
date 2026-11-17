#include "main.h"
#include <stdio.h>

/**
 * *_strncat - concatenates s1 & s2
 * @dest: destination of the copied string
 * @src: source of the copied string
 * @n: bytes from src
 *
 * Return: Nothing
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; j < n && j != '\0'; j++)
	{
		dest[len] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
