#include "main.h"

/**
 * print_square - print a square
 * @size : the size of the square
 */
void print_square(int size)
{
	int i = 0, j;

	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
