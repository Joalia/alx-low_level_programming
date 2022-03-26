#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse a string
 * @s : the string to reverse
 */
void rev_string(char *s)
{
	int len, i, j;
	char *tmp;

	len = strlen(s);

	j = 0;
	for (i = len - 1; i >= 0; i--)
	{
		*(tmp + j) = *(s + i);
		j++;
	}
	printf("\n");
}
