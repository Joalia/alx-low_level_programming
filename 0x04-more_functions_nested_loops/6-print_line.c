#include "main.h"
/**
 * print_line - print a straight line
 * @n: the length of the line
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
			_putchar('_');
		_putchar('_');
	}
}
