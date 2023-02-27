#include <stdio.h>
#include "main.h"
/**
*puts2 -  prints every other character of a string, starting with the first character
*@str: the pointer to string to print
*Return: void, nothing
*/
void puts2(char *str)
{
	
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
		i++;
	}
	printf("\n");
}
