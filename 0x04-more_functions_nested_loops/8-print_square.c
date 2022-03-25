#include "main.h"

/**
 * print_square - print a square
 * @size : the size of the square
 */
void print_square(int size)
{
	int i = 0, j;

	if (size > 0)
	{
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j = j + 1;
			}
			_putchar('\n');
			i = i + 1;
		}
	}
	else
	{
		_putchar('\n');
	}
}
