#include "main.h"
#include <stdio.h>
#include <string.h>

/* _strncpy: copy a string
 * @dest: the string to copy
 * @src: where w'll copy
 * @n: the index
 * Return: a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len1, len2, index1, index2, limit;

	len1 = strlen(src);
	index2 = 0;


	if (n == 0)
		return (dest);
	if (n > len1)
		limit = len1;
	else
		limit = n;
	for (index1 = 0; inde1 <= limit; index1++)
	{
		dest[index2] = src[index1];
		index2++;
	}

	return (dest);
}
