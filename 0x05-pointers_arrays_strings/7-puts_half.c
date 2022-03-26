#include "main.h"
#include <stdio.h>

/**
 * puts_half - print the half of a string
 * @str : the string
 */
void puts_half(char *str)
{
	int len = 0, index = 0;

	while (str[index++])
		len++;

	if (len % 2 == 0)
	{
		for (index = len / 2; index < len; index++)
			printf("%c", str[index]);
	}
	else
	{
		for (index = ((len - 1) / 2) + 1; index < len - 1; index++)
			printf("%c", str[index]);
	}

	printf("\n");
}
