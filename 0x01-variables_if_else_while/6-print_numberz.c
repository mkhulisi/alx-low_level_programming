#include <stdio.h>
/**
 * main - programm entry point
 * Description: prints out all the base10 numbers using putchar
 * Return: 0 success
 */
int main(void)
{

	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}

	putchar('\n');
	return (0);
}
