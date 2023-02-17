#include <stdio.h>
/**
 * main - program entry point
 * Descriptio: print the letters of the alphabet in lowercase and uppercase
 * Return: 0 success
 */
int main(void)
{
	int x;
	int t;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}

	for (t = 'A'; t <= 'Z'; t++)
	{
		putchar(t);
	}

	putchar('\n');

	return (0);
}
