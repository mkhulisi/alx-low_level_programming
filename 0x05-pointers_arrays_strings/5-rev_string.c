#include <stdio.h>
#include "main.h"
/**
*rev_string - prints a string in reverse followed by new line
*@s: the pointer to string to print
*Return: void, nothing
*/
void rev_string(char *s)
{


	int len;
	int i;

	len = 0;
	i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	while (len >= 0)
	{
		printf("%c", s[len]);
		len--;

	}
	*s = '\n';
