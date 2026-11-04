#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out the alphabet except for q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *alphabet;
	int i;

	alphabet = "abcdfghijklmnoprstuvwxyz";

	for (i = 0; i < 24; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');

	return (0);
}
