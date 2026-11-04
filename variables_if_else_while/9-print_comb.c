#include <stdio.h>

/**
 * main - print base 10 integers in ENGLISH
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *numbz;
	int i;

	numbz = "0123456789";
	i = 0;

	while (i < 9)
	{
		putchar(numbz[i]);
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('9');

	return (0);
}
