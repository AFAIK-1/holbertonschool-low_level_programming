#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares strings s1 & s2
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: difference between s2 & s1 in int
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int n;
	int cmp;

	i = 0;
	n = 0;
	cmp = 0;

	while (cmp != 1 && s[i] != '\0')
	{
		n = s1[i] - s2[i];

		if (n == 0)
			i++;
		else
			cmp = 1;
	}
	return (n);
}
