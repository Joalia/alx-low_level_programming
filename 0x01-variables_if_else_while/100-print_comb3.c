#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int c = 0;
	int n;

	while (c < 10)
	{
		for (n = c; n < 10; n++)
		{
			if (n != c)
			{
				putchar(48 + c);
				putchar(48 + n);
				if (c != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		c++;
	}
	putchar('\n');
	return (0);
}
