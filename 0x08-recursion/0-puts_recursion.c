#include "main.h"
/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: points to array of char
 * Return: void, nothing
 */

void _puts_recursion(char *s)
{
	int x;

	x = 0;

	if (s[x] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[x]);
		_puts_recursion(s + 1);
	}
}
