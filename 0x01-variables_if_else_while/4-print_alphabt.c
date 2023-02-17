#include <stdio.h>
/**
 * main - program entry point
 * Descriptio: print the letters of the alphabet in lowercase and uppercase
 * Return: 0 success
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
		{
			continue;
		}
		else
		{
			putchar(x);
		}
	}

	putchar('\n');

	return (0);
}
