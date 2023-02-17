#include <stdio.h>
/**
 * main - programm entry point
 * Description: prints out l hedadecimal numbers
 * Return: 0 success
 */
int main(void)
{

	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}

	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}

	putchar('\n');
	return (0);
}
