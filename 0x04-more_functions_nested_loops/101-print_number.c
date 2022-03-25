#include "main.h"
/**
 * print_number - print an integer
 * @n: the integer
 */

void print_number(int n)
{
	int quo, rest;
	quo = n;

	if (quo / 1000 != 0)
	{
		rest = quo % 1000; 
		quo = quo / 1000;
		_putchar(rest +'0');
	}
	if (quo / 100 != 0)
	{
		rest = quo % 100;
		quo = quo / 100;
		_putchar(rest + '0');
	}
	if (quo / 10 != 0)
	{
		rest = quo % 10;
		quo = quo / 10;
		_putchar(rest + '0');
	}
	_putchar(quo +'0');
}
