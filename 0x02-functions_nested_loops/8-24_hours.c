#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every mintute of the day
 *
 * Return: Always 0
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
					printf("%d%d:%d%d", f1, f2, s1, s2);
				}
			}
		}
	}
	return (0);
}
