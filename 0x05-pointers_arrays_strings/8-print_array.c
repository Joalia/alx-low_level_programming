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
		while (index < n)
		{
			printf("%d", a[index]);
		}
	}
}	
