#include "main.h"

/**
 * print_triangle - draws an isosceles triangle made of #
 * @size: length of a triangle's side
 *
 * Return: Nothing
 */
void print_triangle(int size)
{
	int x;
	int y;
	int space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < size; y++)
		{
			for (space = (size - 1); space > y; space--)
			{
				_putchar(' ');
			}

			for (x = 0; x <= y; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
