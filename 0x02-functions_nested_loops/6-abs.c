#include "main.h"
#include <stdio.h>
/**
 * _abs - print the absolute value of a number
 * @n: The number to be checked
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n > 0)
		printf("%d", n);
	else
		printf("%d", -n);
	return (0);
}
