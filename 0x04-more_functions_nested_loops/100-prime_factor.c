#include <stdio.h>
#include <math.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int is_prime(int num)
{
	int i;

	sqr_root = sqrt(num);
	if (num == 1)
	{
		return (0);
	}
	for (i = 2; i <= sqr_root; i++)
	{
		if ( sqr_root % i == 0)
			return (0);
	}
	return (1);
}


int main(void)
{
	int i, max = 2;

	mid = 612852475143 / 2;
	for (i = 2; i <= mid; i++)
	{
		if (mid % i == 0)
		{
			if (is_prime(i))
			{
				if (max < i)
					max = i;
			}
		}
	}
	printf("%d\n", max);
}	
