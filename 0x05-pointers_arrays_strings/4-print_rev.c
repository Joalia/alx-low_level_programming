#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - print a string in reverse followed by a new line
 * @s: the string
 */
void print_rev(char *s)
{
	int i, size, a;

	size = 0;
	a = 0;
	while (*(s + a))
	{
		a++;
		size++;
	}

	for (i = size; i >= 0; i--)
	{
		printf("%c", *(s + i));
	}
	printf("\n");
}
