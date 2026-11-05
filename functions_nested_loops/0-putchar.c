#include <stdio.h>
#include <unistd.h>
#include <_putchar.c>
#include <main.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * main - prints out _putchar
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	char *c;
	int i;

	c = "_putchar";

	for (i = 0; c[i] != '\0'; i++)
	{
		_putchar(c[i]);
	}
	putchar('\n');

	return (0);
}
