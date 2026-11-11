#include "main.h"

/**
 * print_array - prints a given array
 * @a: array to print
 * @n: length/size of array
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");
}
