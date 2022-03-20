#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum = 0, sum2 = 0;

	for (sum <= 4000000 )
	{
		sum = fib1 + fib2;
		if (sum % 2 == 0)
			sum2 += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%lu", sum2);
	printf("\n");
	return (0);
}
