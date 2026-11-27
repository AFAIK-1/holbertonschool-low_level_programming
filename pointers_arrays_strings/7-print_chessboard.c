#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints a text version of the chessboard
 * @a: char in array board to print
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
			_putchar(a[x][y]);
		putchar('\n');
	}
}
