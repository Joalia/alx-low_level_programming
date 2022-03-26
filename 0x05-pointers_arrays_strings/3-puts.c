#include "main.h"
#include <stdio.h>
/**
 * _puts - print a string followed by a new line
 * @str: the string to print
 */
void _puts(char *str)
{
	int index;

	index = 0;
	while (*(str + index))
	{
		printf("%c", *(str + index));
		index++;
	}
	printf("\n");
}
