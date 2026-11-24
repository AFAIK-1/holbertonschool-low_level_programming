#include "main.h"
#include <stdio.h>

/**
 * cap_string - converts beginning char to uppercase
 * @str: string to modify
 *
 * Return: char str as converted string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '.')
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;

	return (str);
}
