#include "main.h"
#include <stdio.h>
/**
 * print_sign - print the sign of a number
 * @n: The number to be checked
 * Return: 1 when positive 0 when negative -1 else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
}
