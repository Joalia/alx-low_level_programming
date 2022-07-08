#include "main.h"
#include <string.h>
#include <stdlib.h>

/* _strcmp: compare 2 strings
 * @s1: string 1
 * @s2 string 2
 * Return: 0 -1 or 1
 */
int _strcmp(char *s1, char *s2)
{
	int tail, i;
	int len1 = 0;
	int len2 = 0;
	tail = strlen(s1) - strlen(s2);

	if (tail == 0)
	{
		for (i = 0; i < strlen(s1); i++)
		{
			len1 = len1 + s1[i];
			len2 = len2 + s2[i];
		}

		if (len1 > len2):
			return 1;
		if (len1 < len2)
			return -1;
		return 0;
	}


	else if (tail < 0)
		return -1;
	else
		return 1;
}
