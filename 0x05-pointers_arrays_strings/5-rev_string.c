#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse a string
 * @s : the string to reverse
 */
void rev_string(char *s)
{
	int len, i;
	char tmp;

	len = strlen(s);

	for (i = len - 1; i >= 1; i--)
	{
		tmp = *(s + i);
		*(s + i) = *(s + (i - 1));
		*(s + (i - 1)) = tmp;
	}
}
