#include <stdio.h>
/**
 * main -Entry point
 * print three differents digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f = 0; /* f is the first digits*/
	int s; /* s is the second digit */
	int t; /* t for the thirst digit*/

	while (f < 10)
	{
		for (s = f; s < 10; s++)
		{
			if (s != f)
			{
				for (t = s; t < 10 ; t++)
				{
					if (t != s)
					{
						putchar(48 + f);
						putchar(48 + s);
						putchar(48 + t);
						if (f != 7)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
		f++;
	}
	putchar('\n');
	return (0);
}
