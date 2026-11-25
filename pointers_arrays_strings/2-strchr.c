#include "main.h"
#include <stdio.h>

/**
 * *_strchr - finds char and prints the string from char
 * @s: source string
 * @c: char to find
 *
 * Return: char s from an instance of c
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != c && s[i] != '\0'; i++)
		;

	if (s[i] != c)
		return (NULL);

	s = &s[i];
	return (s);
}
