#include "main.h"

/**
 * main -Entry point
 * Using function's header
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
