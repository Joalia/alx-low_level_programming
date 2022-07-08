#include "main.h"
#include <string.h>
#include <stdlib.h>

/* _strcmp: compare 2 strings
 * @s1: string 1
 * @s2 string 2
 * Return: 0 -1 or 1
 */
int _strcmp(char *s1, char *s2)
{
	int tail, i;
	tail = strlen(s1) - strlen(s2);

	if (tail == 0)
		return 0;
	else if (tail < 0)
		return -1;
	else
		return 1;
}
			

