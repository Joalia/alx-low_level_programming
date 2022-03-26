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
	i = 0;
	while (i < k - 1)
	{
		printf("%c", str[i + 2]);
		i = i + 2;
	}
	printf("\n");
}
