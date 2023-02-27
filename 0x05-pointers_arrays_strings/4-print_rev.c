#include "main.h"
#include <stdio.h>
/**
*print_rev - prints a string in reverse followed by new line
*@str: the pointer to string to print
*Return: void, nothing
*/
void print_rev(char *str)
{

	int j;
	int len;
	int i;

	j = 0;
	len = 0;
	i = 0;

	while (str[i] != '\0')
	{
		str++;
		len++;
	}
	while (len >= 0)
	{
		printf("%c", str[len]);
		len--;
	}

	printf("\n");

}
