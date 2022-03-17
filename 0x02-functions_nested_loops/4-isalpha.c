#include "main.h"
/**
 * _isalpha - checks if it is an alphabetic
 * character
 * @c: The character to be checked
 * Return: 1 when True and 0 when fasle
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
