#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints the alphabet un lowercase, followed by a new line
 */

void print_alphabet(void)
{
	int c = 0;

	while (c < 10)
	{
		_putchar(48 + c);
		if (c != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		c++;
	}
	putchar('\n');
}
