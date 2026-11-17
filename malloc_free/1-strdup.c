#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a new duplicated string
 * @str: source of duplicated string
 *
 * Return: null if size 0, otherwise a pointer
 */
char *create_array(char *str)
{
	char *str2;
	int len;
	int i;

	for (len = 0; str[len] != '0'; len++)
		;

	len++;

	str2 = malloc(len * sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
		str2[i] = str[i];

	return (str2);
}
