#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 * @str : the string
 */
void puts2(char *str)
{
	int i;

	printf("%c", s[0]);
	for (i = 0; i < strlen(str) - 1; i++)
	{
		printf("%c", str[i + 1]);
	}
	printf("\n");
}
