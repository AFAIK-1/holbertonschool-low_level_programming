#include "main.h"
#include <stdio.h>

/**
 * _strspn - counts num of consecutive char s and accept matches
 * @s: source string
 * @accept: chars to match
 *
 * Return: unsigned int k which is the num of matches
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k;
	int i, j, check;

	k = 0;

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
		if (check == 0)
			break;
		k++;
	}
	return (k);
}
