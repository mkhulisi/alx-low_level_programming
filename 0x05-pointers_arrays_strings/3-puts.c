#include "main.h"
/**
*_puts - prints a string followed by new line
*@str: the pointer to string to print
*Return: void, nothing
*/
void _puts(char *str)
{

	int j;

	j = 0;

	while (str[j] != '\0')
	{
		printf("%c", str[j]);
		j++;
	}

}
