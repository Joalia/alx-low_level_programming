#include "main.h"
/**
 * _isdigit - if a number is a digit
 * @c : the number
 * Return: 0 if false and 1 if true
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
