#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, act;
	long long p = 2;
	long long pp = 1;

	printf("%lld, ", pp);
	for (i = 0; i < 49; i++)
	{
		printf("%lld", p);
		if (i < 48)
			printf(", ");
		act = p + pp;
		pp = p;
		p = act;
	}
	return (0);
}
