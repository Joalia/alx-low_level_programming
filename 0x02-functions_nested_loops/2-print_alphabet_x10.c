#include "main.h"
/**
 * print_alphabet_x10 - print the alphanet in lowercase 
 * times followed by a new line
 */

void print_alphabet_x10(void)
{
	char letter;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
