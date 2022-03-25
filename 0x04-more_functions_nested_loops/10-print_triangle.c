#include "main.h"
/**
 * print_triangle - print a triangle depending of the size given
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i, j, len;

	if (size > 0)
	{
		for (len = 1; len <= size; len++)
		{
			for (i = size - len; i > 0; i--)
			{
				_putchar(' ');
			}

			for (j = 0; j < len; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
