#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table starting with 0
 *
 */
void times_table(void)
{
	int n, b;

	for (n = 0; n < 10; n++)
	{
		for (b = 0; b < 10; b++)
		{
			printf("%d", n * b);
			if (b < 9)
				printf(", ");
		}
		printf("\n");
	}
}
