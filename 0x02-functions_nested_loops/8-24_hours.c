#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every mintute of the day
 *
 */
void jack_bauer(void)
{
	int f1, f2, s1, s2;

	for (f1 = 0; f1 <= 2; f1++)
	{
		for (f2 = 0; f2 <= 2; f2++)
		{
			for (s1 = 0; s1 <= 5; s1++)
			{
				for (s2 = 0; s2 <= 9; s2++)
				{
					_putchar(f1 + '0');
					_putchar(f2 + '0');
					_putchar(':');
					_putchar(s1 + '0');
					_putchar(s2 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
