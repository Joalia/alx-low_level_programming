#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the times table
 *
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		_putchar('0');
		_putchar(',');

		for (b = 1; b < 10; b++)
		{
			_putchar(' ');
			if (a * b / 10 == 0)
			{
				_putchar(' ');
				printf("%d", a * b);
			}
			else
			{
				printf("%d", a * b)
			}
			if (b < 9)
				_putchar(',');
		}
	}
}
