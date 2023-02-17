#include <stdio.h>
/**
 * main - programm entry point
 * Description: prints oout comma seperated numbers using putchat and loop
 * Return: 0 success
 */
int main(void)
{

	int x;
	int c = ',';
	int s = ' ';

	for (x = '0'; x <= '9'; x++)
	{
		if (x == '9')
		{
			putchar(x);
		}
		else
		{
			putchar(x);
			putchar(c);
			putchar(s);
		}
	}

	putchar('\n');
	return (0);
}
