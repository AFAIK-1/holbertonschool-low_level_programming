#include "main.h"

/**
 * rev_string - reverses a string and overwrites it
 * @s: array of chars to check
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i;
	int len;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
		;

	len--;

	for (i = 0; i < len; i++, len--)
	{
		temp  = s[i];
		s[i] = s[len];
		s[len] = temp;
	}
}
