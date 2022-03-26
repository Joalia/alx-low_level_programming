#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints every other character of a string
 * @str : the string
 */
void puts2(char *str)
{
	int i, k;

	printf("%c", str[0]);
	k = strlen(str);
	for (i = 0; i < k - 1; i++)
	{
		printf("%c", str[i + 1]);
	}
	printf("\n");
}
