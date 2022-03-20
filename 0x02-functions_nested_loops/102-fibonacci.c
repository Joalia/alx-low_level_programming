#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, act;
	unsigned long p = 2;
	unsigned long pp = 1;

	printf("%lu, ", pp);
	for (i = 0; i < 49; i++)
	{
		printf("%lu", p);
		if (i < 48)
			printf(", ");
		act = p + pp;
		pp = p;
		p = act;
	}
	return (0);
}
