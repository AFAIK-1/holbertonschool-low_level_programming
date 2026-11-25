#include "main.h"
#include <stdio.h>

/**
 * *_strchr - finds an instance of char and prints the string from that instance
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

	s = &s[i];

	if (*s == '\0')
		return (NULL);
	else
		return (s);
}
