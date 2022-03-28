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
char *_strcat(char *dest, char *src)
{
	int index1, index2 = 0, len1, len2;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (index1 = len1; index1 < len1 + n; index1++)
	{
		dest[index1] = src[index2];
		if (!index2++)
			break;
	}
	return (dest);
}
