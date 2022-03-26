#include "main.h"
/**
 * _strlen - give the length of a string
 * @s : the first element of the string
 * Return: the size of the string
 */i
int _strlen(char *s)
{
	int size;

	size = 1;
	a = 1;
	while (*(s + a))
	{
		a++;
		size++;
	}
	return (size);
}
