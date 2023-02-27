
#include <stdio.h>
#include <stdlib.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: zero
 */
int main(void)
{
	int x;

	for (x = 1; x <= 10; x++)
	{
		printf("%d%c\n", rand(), 60 + x);
	}
}
