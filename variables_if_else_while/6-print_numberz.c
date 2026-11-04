#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints base 10 integers using putchar()
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *numberz;
	int i;

	numberz = "0123456789";
	i = 0;

	while (i < 10)
	{
		putchar(numberz[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
