#include "main.h"
/**
  * print_sign - check if a number is positive or negative
  *@n: the number to check
  * Return: 1 if character is alphabet 0 otherwise
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
