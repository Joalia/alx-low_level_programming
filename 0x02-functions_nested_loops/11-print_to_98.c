#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural number from n to 98
 * @n: the number n
 */
void print_to_98(int n)
{
	int a;

	a = n;
	while (a != 98)
	{
		printf("%d, ", a);
		if (a < 98)
			a++;
		if (a > 98)
			a--;
	}
	printf("%d", a);
	printf("\n");
}
