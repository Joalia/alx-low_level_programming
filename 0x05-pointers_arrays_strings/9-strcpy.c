#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcpy - copie the string pointed
 * @dest: the buffer
 * @src: the string to copy
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int index, len;

	len = strlen(src);
	for  (index = 0; index <= len; index++)
	{
		dest[index] = src[index];
	}
	return (*dest);
}
