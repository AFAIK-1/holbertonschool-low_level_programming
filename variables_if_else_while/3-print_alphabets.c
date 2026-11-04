#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints out the alphabets lower/upper using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *lower_abc;
	const char *upper_abc;
	int i;

	lower_abc = "abcdefghijklmnopqrstuvwxyz";
	upper_abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 26; i++)
	{
		putchar(lower_abc[i]);
	}

	for (i = 0; i < 26; i++)
	{
		putchar(upper_abc[i]);
	}

	putchar('\n');

	return (0);
}
