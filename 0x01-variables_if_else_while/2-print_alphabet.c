#include <stdio.h>
/**
 * main - program entry point
 * Descriptio: print the letters of the alphabet in lower case
 * Return: 0 success
 */
int main(void)
{

	for (int x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
