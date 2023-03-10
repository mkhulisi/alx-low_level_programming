#include <stdio.h>
#include <stdlib.h>
/**
 * main - program entry point, multiply two interger args
 * @argc: contains cli arguments count
 * @argv: an array containing the actual arguments
 *Return: 0 on success 1 on error
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
