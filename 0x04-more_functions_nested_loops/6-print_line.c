#include "main.h"
/**
 * print_line - print a straight line
 * @n: the length of the line
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = n; i != 0; i--)
			_putchar('_');
		_putchar('\n');
	}
}
