#include "main.h"
#include <stdio.h>

/**
 * string_toupper - converts lowercase char in str to uppercase
 * @str: string to change
 *
 * Return: converted string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
