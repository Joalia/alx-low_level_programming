#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, act;
	long p = 2;
	long pp = 1;

	printf("%ld, ", pp);
	for (i = 0; i < 49; i++)
	{
		printf("%ld", p);
		if (i < 48)
			printf(", ");
		act = p + pp;
		pp = p;
		p = act;
	}
	return (0);
}
