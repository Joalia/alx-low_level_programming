#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strncat - concatenate 2 string
 * @dest: the first
 * @src: the second string
 * @n: the bytes
 * Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index1, index2 = 0, len1, len2, limit;

	len1 = strlen(dest);
	len2 = strlen(src);

	if (n = 0)
		return (dest);
	else if (n <= len2)
		limit = len1 + n;
	else
		limit = len1 + len2;

	for (index1 = len1; index1 < limit; index1++)
	{
		dest[index1] = src[index2];
	}
	return (dest);
}
