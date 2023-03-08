#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse using recursion
 * @s: pointer to strin to print in reverse
 * Return: void, nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		printf("%s", *s);
	}
}
}
