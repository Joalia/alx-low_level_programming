#include "main.h"

/**
 * main -Entry point
 * Using function's header
 * Return: Always 0 (Success)
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet()
{
	char a = 'a';
	int n = 0;

	while (n < 26)
	{
		putchar(a);
		a++;
		n++;
	}
	putchar('\n');
}
