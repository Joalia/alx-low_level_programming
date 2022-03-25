#include "main.h"
/**
 * print_diagonal - print a straight line
 * @n: the length of the line
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (j = 1; j <= n; j++)
		{
			for (i = n; i != 1; i--)
				_putchar(' ');
			_putchar('\\');
			if (j == n)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
