#include "main.h"
/**
 * _islower - cchecks if is lowercase
 * @c: The character to be checked
 * Return: 1 when True and 0 when fasle
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
