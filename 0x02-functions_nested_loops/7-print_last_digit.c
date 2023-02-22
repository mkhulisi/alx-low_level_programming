#include "main.h"
/**
  * print_last_digit - get the last digit of a number
  *@r: number to get last digit for
  * Return: absolute value of of a number
  */
int print_last_digit(int r)
{

	int ld;

	last = r % 10;

	if (ld < 0)
	{
		ld = ld * -1;
	}

	_putchar(ld + '0');

	return (ld);
}
