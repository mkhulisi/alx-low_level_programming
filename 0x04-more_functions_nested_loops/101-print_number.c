#include "main.h"
/**
 * print_number - print a number using putchar
 * @n: the number to be printed
 * Return: void, nothing
 */
void print_number(int n)
{
	if (var < 0) 
    	{
		 putchar('-');
		 var = var * -1;
	}
	if (var == 0)
	       	putchar('0');
	if (var/10)
		my_putchar(var/10);

	putchar(var%10 + '0');
}
