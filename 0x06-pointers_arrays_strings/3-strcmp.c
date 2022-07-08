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
	while (*s1)
	{
		if (*s1 != *s1)
			break;
		s1++;
		s2++;
	}
	return ((*unsigned char*)s1 - *(unsigned char*)s2);
}
