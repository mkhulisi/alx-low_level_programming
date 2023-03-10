#include <stdio.h>
#include <stdlib.h>
/**
 * main - program entry point, adds interger args
 * @argc: contains cli arguments count
 * @argv: an array containing the actual arguments
 *Return: 0 on success 1 on error
 */
int main(int argc, char *argv[])
{
	int sum;
	int x;

	sum = 0;
	x = 1;

	while (x < argc)
	{
		if (!atoi(argv[x]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = atoi(argv[x]) + sum;
		}
		x++;
	}
	printf("%d\n", sum);
	return (0);
}
