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
	for (i = 0; i < 42; i++)
	{
		printf("%lu", p);
		if (i < 42)
			printf(", ");
		act = p + pp;
		pp = p;
		p = act;
	}
	for (i = 0; i < 8; i++)
	{
		printf("%d", p);
		act = p + pp;
		pp = p;
		p = act;
		if (i < 7)
			printf(", ");
	}
	return (0);
}
