#include <stdio.h>
/**
 * main - programm entry point
 * program that prints all possible different combinations of three digits.
 * Return: 0 success
 */
int main(void)
{
	int d1, d2, digit3;

	for (d1 = 0; d1 < 8; d1++)
	{
		for (d2 = d1 + 1; d2 < 9; d2++)
		{
			for (digit3 = d2 + 1; digit3 < 10; digit3++)
			{
				putchar((d1 % 10) + '0');
				putchar((d2 % 10) + '0');
				putchar((digit3 % 10) + '0');

				if (d1 == 7 && d2 == 8 && digit3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
