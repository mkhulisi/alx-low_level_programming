#include <stdio.h>
#include "main.h"
/**
  * print_to_98 - print natural numbers from 0 to 98
  *@n: the number to start from
  * Return: void, nothing
  */
void print_to_98(int n)
{

	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				putchar('\n');
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				putchar('\n');
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}
