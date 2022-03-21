#include "main.h"

/**
 * _isupper - checks if a character is upper
 * @c:  the character
 * Return: 1 if c is upper and c otherwise
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
