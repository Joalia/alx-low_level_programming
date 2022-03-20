#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, act;
	int p = 2;
	int pp = 1;

	printf("%d, ", pp);
	for (i = 0; i < 50; i++)
	{
		printf("%d, ", p);
		act = p + pp;
		pp = p;
		p = act;
	}
}
