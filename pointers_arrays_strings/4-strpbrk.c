#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - locates the bytes off the first instance of s
 * @s: source string
 * @accept: chars to match
 *
 * Return: char byte from accept in k
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, check;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				check = 1;
				break;
			}
		}

		if (check == 1)
		{
			s = &s[i];
			return (s);
		}
	}
	return (NULL);
}
