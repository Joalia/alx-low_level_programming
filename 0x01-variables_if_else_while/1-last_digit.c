#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;
	printf("Last digit of %d is", n);
	if (lastDigit > 5)
		printf(" and is greater than5");
	else if (lastDigit == 0)
		printf(" and is 0");
	else
		printf(" and is less than 6 and not 0\n");
	return (0);
}
