#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * *_strncat - concatenate 2 string
 * @dest: the first
 * @src: the second string
 * @n: the limit of the src strinc to be taken
 * Return: a string
 */

char *_strncat(char *dest, char *src, int n)
{
        int index1, index2 = 0, len1, len2;

        len1 = strlen(dest);
        len2 = strlen(src);

        for (index1 = len1; index1 < len1 + len2; index1++)
        {
                dest[index1] = src[index2];
                index2++;
        }
        return (dest);
}
