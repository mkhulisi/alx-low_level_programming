#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse using recursion
 * @s: pointer to strin to print in reverse
 * Return: void, nothing
 */

void _print_rev_recursion(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	while (x >= 0)
	{
		 printf("%c", s[x]);
		 x--;
		 _print_rev_recursion(s - 1);
	}

	printf("\n");
}
