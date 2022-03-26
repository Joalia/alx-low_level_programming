#include <stdio.h>
#include "main.h"
/**
 * print_rev - print a string in reverse followed by a new line
 * @s: the string
 */
void print_prev(char *s)
{
	int i, len;

	len = _strlen(s);

	for (i = len; i <= 0; i--)
	{
		printf("%c", *(s + i));
	}
	printf("\n");
}
