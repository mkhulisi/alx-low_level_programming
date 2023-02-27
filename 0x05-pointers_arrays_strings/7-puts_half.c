#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints the second half of the string
 * @str: the string to process
 * Return: void nothing
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i / i = 2; str[i] != '\0'; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
