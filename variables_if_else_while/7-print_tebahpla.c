#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in reverse using putchar()
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *cba;
	int i;

	cba = "abcdefghijklmnopqrstuvxyz";

	for (i = 26; i > 0; i--)
	{
		putchar(cba[i]);
	}
	putchar('\n');

	return (0);
}
