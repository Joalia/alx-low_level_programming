#include "main.h"
#include <stdio.h>
/**
 * print_times_table - times table
 * @n: the number of times table
 */
void print_times_table(int n)
{
	int num, mult, prod;

	if (n < 15 && n > 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				prod = num * mult;

				if (prod <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (prod > 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
