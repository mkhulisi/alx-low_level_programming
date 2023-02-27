#include "main.h"
#include <stdio.h>
/**
*print_rev - prints a string in reverse followed by new line
*@str: the pointer to string to print
*Return: void, nothing
*/
void print_rev(char *str)
{

	int len;
	int i;
	char out_put[];

	len = 0;
	i = 0;

	while (str[i] != '\0')
	{
		str++;
		i++;
	}
	while (len >= 0)
	{
		printf("%c", str[len]);
		len--;
	}

	printf("\n");

}
