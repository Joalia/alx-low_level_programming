#include "main.h"

/**
 * more_numbers - print all the digits from 0 to 9
 *
 */
void more_numbers(void)
{
	int num;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 9; num++)
			_putchar((num % 10) + '0');
		_putchar('\n');
	}

	_putchar('\n');
}
