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

	last = n % 10;
	if (last < 0)
		last = -last;
	_putchar(last + '0');
	return (last);
}
