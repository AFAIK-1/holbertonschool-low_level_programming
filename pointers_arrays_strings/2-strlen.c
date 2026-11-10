#include "main.h"

/**
 * _strlen - imitates strlen() function in C
 * @s: char to check
 *
 * Return: Ze length in int
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
