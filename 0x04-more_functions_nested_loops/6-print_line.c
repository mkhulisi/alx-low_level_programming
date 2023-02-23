#include "main.h"
/**
 * print_line - prints a staight line using _ character
 * @n: number controlls how long is line
 * Return: void, nothing
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar('_');
			a++;
		}

		 _putchar('\n');
	}

	else
	{
		_putchar('\n');
	}
}
