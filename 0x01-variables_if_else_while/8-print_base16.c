#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Aways 0 (Success)
 */
int main(void)
{
	int n;
	char ch = 'a';

	for (n = 0; n < 16; n++)
	{
		if (n < 10)
			putchar(n + '0');
		if (n >= 10)
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
