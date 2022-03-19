#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table starting with 0
 *
 */
void times_table(void)
{
	int n, b, times;

	for (n = 0; n < 10; n++)
	{
		for (b = 0; b < 10; b++)
		{
			times = n * b;
			if ((b > 0) && (times / 10 == 0))
				_putchar(' ');
			_putchar(' ');
			printf("%d", times);
			if (b < 9)
				_putchar(',');
		}
		printf("\n");
	}
}
