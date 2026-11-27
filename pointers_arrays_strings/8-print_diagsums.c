#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the diagonal sums of a square matrix
 * @a: source array of int
 * @size: length of the side of a square matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int x, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[(x * size) + x];
		sum2 += a[(x * size) + (size - 1 - x)];
	}
	printf("%d, %d\n", sum1, sum2);
}
