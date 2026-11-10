#include <stdio.h>

/**
 * main - prints up to 100 nums with fizzbuzz test
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int end;
	char *f;
	char *b;
	char *fb;

	f = "Fizz";
	b = "Buzz";
	fb = "FizzBuzz";
	end = 100;

	for (n = 1; n <= end; n++)
	{
		if (n % 3 == 0)
			printf("%s ", f);
		else if (n % 5 == 0)
			printf("%s ", b);
		else if ((n % 3 == 0) && (n % 5 == 0))
			printf("%s ", fb);
		else
			printf("%d ", n);
	}
}
