#include "main.h"
/**
 * _strlen - give the length of a string
 * @s : the first element of the string
 * Return: the size of the string
 */
int _strlen(char *s)
{
	int size, a;

	size = 1;
	a = 1;
	while (*(s + a))
	{
		a++;
		size++;
	}
	return (size);
}
