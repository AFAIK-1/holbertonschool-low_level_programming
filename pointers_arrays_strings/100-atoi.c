#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an int
 * @s: string to convert
 *
 * Return: converted int
 */
int _atoi(char *s)
{
	int i;
	int n;
	int sign;
	int check;

	n = 0;
	sign = 1;
	check = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 45 && check != 1)
			sign = sign * (-1);
		else if (s[i] >= 48 && s[i] <= 57)
		{
			check = 1;
			n = (n * 10) + (s[i] - '0');
		}
		else if (s[i] == ' ' && check == 1)
		{
			check = 0;
			break;
		}
	}
	n = n * sign;

	return (n);
}
