#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print the last digit of a number
 * @n: the number
 * Return: the value of the las digit
 */

int print_last_digit(int n)
{
	int last;

	if (n >= 0)
		n = n;
	if (n < 0)
		n = -n;
	last = n % 10;
	_putchar(last + '0');
	return (last);
}
