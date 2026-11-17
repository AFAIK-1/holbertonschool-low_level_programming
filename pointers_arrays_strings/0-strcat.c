#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenates s1 & s2
 * @dest: destination of the copied string
 * @src: source of the copied string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	for (len = 0; src[len] != '\0'; len++)
		;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';

	return (dest);
}
