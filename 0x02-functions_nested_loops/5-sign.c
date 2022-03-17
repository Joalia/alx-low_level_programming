#include "main.h"
#include <stdio.h>
/**
 * _islower - cchecks if is lowercase
 * @n: The number to be checked
 * Return: 1 when positive 0 when negative -1 else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+\n");
		return (1);
	}
	else if (n == 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		printf("-\n");
		return (-1);
	}
}
