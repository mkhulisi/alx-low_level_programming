#include <stdio.h>
#include "main.h"
void print_alphabet(void);

/**
 * main - program entry poit
 * program starts from here
 * Return: 0 allways for success
 */
int main(void)
{

	print_alphabet();
	return (0);
}

/**
 * print_alphabet - function prototype
 * prints alphabets in lower case
 * Return: void
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}

	putchar('\n');
}
