#include "main.h"
/**
 * print_diagonal - print a straight line
 * @n: the length of the line
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = n; i != 0; i--)
			_putchar('\\');
	}
	_putchar('\n');
}
