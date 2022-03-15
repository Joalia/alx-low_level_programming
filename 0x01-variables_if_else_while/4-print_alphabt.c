#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Aways 0 (Success)
 */
int main(void)
{
        char a = 'a';
        char aa = 'A';
        int n = 0;
        int nn = 0;

        while (n < 26)
        {
		if (a == 'q') || (a == 'e')
			a++;
                putchar(a);
                a++;
                n++;
        }
        putchar('\n');
        return (0);
}
