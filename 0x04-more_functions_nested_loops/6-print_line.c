#include "main.h"
/**
 * print_line - prints a staight line using _ character
 * @n: number controlls how long is line
 * Return: void, nothing
 */
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_';
		}
		_putchar('\n');
	}

}
