#include <stdio.h>

int main(void)
{
printf("Size of a char: %d byte(s)\nSize of an int: %d byte(s)\n", sizeof(char), sizeof(int));
printf("Size of a long int: %d byte(s)\nSize of a long long int: %d byte(s)\n", sizeof(signed int), sizeof(long long int));
printf("Size of a float: %d byte(s) ", sizeof(float));
}
