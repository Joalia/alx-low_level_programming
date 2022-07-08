#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strncat - concatenate 2 string
 * @dest: the first
 * @src: the second string
 * @n: a integer
 * Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest + strlen(destination);
	while (*src != '\0' && n--)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0";
        return (dest);
}
