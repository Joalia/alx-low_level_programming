#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum = 0, sum2 = 0;

	for (count = 0; count < 49; count++)
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
