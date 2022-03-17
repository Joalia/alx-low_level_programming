#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_alphabet - prints the alphabet un lowercase, followed by a new line
 */
int _putchar(char c)
{
	int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter < 'z'; letter++)
	{
		_putchar(letter);
	}
	putchar('\n');
}
