#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: source string
 * @needle: string to match
 *
 * Return: haystack string starting from needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, len;

	for (len = 0; needle[len] != '\0; len++)
		;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
				break;
		}

		if (j == len)
			return (&haystack[i]);
	}
	return (NULL);
}
