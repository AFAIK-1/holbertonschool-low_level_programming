#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints out the alphabet using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *alphabet;
	int i;

	alphabet = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
	putchar(alphabet[i]);
	}
	putchar('\n');

	return (0);
}
