#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Aways 0 (Success)
 */
int main(void)
{
	char a = 'a';
	char aa = 'A';
	int n = 0;

	while (n < 26)
	{
		putchar(a);
		putchar(aa);
		a++;
		aa++;
		n++;
	}
	putchar('\n');
	return (0);
}

