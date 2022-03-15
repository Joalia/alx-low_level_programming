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
	int nn = 0;

	while (n < 26)
        {
		putchar(a);
		a++;
		n++;
	}
	while (nn < 26)
	{
		putchar(aa);
		aa++;
		nn++;
	}
	putchar('\n');
	return (0);
}
