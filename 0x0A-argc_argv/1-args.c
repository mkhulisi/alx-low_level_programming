#include <stdio.h>
/**
 * main -entry oint, prints number of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%d\n", argc - 1);
		(void)argv;
	}
	return (0);
}
