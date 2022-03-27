#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array
 * @a: array
 * @n: number of elements of the array
 */
void print_array(int *a, int n)
{
	int index = 0;

	if (a[index++])
	{
		index = 0;
		while (index < n - 1)
		{
			printf("%d, ", a[index]);
			index++;
		}
		printf("%d", a[index]);
	}
}
