#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints base 10 integers with a while loop
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");

	return (0);
}
