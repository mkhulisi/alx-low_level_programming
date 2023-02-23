#include "main.h"
/**
 * print_number - print a number using putchar
 * @n: the number to be printed
 * Return: void, nothing
 */
void print_number(int n)
{
	if (n < 0) 
    	{
		 _putchar('-');
		 n = n * -1;
	}
	if (n == 0)
	       	_putchar('0');
	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
