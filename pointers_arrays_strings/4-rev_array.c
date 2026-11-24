#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: num of elements in array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	n -= 1;

	for (i = 0; i < n; i++, n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
