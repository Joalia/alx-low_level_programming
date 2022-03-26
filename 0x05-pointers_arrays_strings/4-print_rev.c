#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - print a string in reverse followed by a new line
 * @s: the string
 */
void print_rev(char *s)
{
	int i, size;

	size = strlen(s);

	for (i = size; i <= 0; i--)
	{
		printf("%c", *(s + i));
	}
	printf("\n");
}
