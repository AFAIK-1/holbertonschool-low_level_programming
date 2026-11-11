#include "main.h"
#include <stdio.h>

/**
 * _strcpy - prints a given array
 * @dest: destination of the copied string
 * @src: source of the copied string
 *
 * Return: Nothing
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len;

	for (len = 0; src[len] != '\0'; len++)
		;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
