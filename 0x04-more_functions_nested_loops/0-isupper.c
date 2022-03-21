#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * _isupper - checks if a character is upper
 * @c:  the character
 * Return: 1 if c is upper and 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
