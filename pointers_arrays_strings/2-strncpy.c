#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - copies s2 into s1 replacing characters until n
 * @dest: destination of the copied string
 * @src: source of the copied string
 * @n: bytes from src
 *
 * Return: char in dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n && src[i] == '\0')
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
