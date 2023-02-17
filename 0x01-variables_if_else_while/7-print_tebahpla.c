#include <stdio.h>
/**
 * main - programm entry point
 * Description: prints out all the alphabets in lowercase in reverse
 * Return: 0 success
 */
int main(void)
{

	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}

	putchar('\n');
	return (0);
}
