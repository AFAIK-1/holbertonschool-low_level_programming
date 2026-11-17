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
	int len;
	int j;

	for (len = 0; src[len] != '\0'; len++)
		;

	for (j = 0; j < n && j != '\0'; i++)
	{
		dest[len] = src[j];
		len++;
	}
	dest[len] = '\0';

	return (dest);
}
