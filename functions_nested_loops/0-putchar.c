#include "main.h"

/**
 * main - prints out _putchar
 *
 * Return: Always 0
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
